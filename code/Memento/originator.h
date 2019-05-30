#ifndef ORIGINATOR_H
#define ORIGINATOR_H

#include "memento.h"
#include <iostream>
#include <string>

// һ��
class Life
{
public:
	void SetDateTime(std::string dt) {
		std::cout << "Set date time to " << dt << std::endl;
		m_dateTime = dt;
	}

	// �����ڴ�ӡ
	std::string GetDateTime() {
		return m_dateTime;
	}

	// �ָ�����ʱ��
	void SetMemento(DateTime *dt) {
		m_dateTime = dt->GetDateTime();
	}

	// ��������ʱ��
	DateTime *CreateMemento() {
		return new DateTime(m_dateTime);
	}

private:
	std::string m_dateTime;
};

#endif // ORIGINATOR_H
