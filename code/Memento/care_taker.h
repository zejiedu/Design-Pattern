#ifndef CARE_TAKER_H
#define CARE_TAKER_H

#include "originator.h"
#include <iostream>
#include <vector>

// �¹ⱦ��
class PandoraBox
{
public:
	PandoraBox(Life *life)
		: m_pLife(life) {}

	~PandoraBox() {
		for (int i = 0; i < m_history.size(); i++) {
			delete m_history.at(i);
		}
		m_history.clear();
	}

	// ���汸��
	void Save() {
		std::cout << "Save ..." << std::endl;;
		m_history.push_back(m_pLife->CreateMemento());
	}

	// ��Խ����һʱ��
	void Undo() {
		std::cout << "Undo ..." << std::endl;;
		m_pLife->SetMemento(m_history.back());
		m_history.pop_back();
	}

private:
	Life *m_pLife;
	std::vector<DateTime *> m_history;
};

#endif // CARE_TAKER_H
