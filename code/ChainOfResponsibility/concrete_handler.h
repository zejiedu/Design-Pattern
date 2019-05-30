#ifndef CONCRETE_HANDLER_H
#define CONCRETE_HANDLER_H

#include "handler.h"

// ����
class Manager : public IHandler
{
public:
	Manager() {}
	~Manager() {}
	virtual void HandleRequest(float days) override {
		if (days <= 1) {
			std::cout << "Manager ��׼�� " << days << " ���" << std::endl;
		}
		else {
			m_pSuccessor->HandleRequest(days);
		}
	}
};

// �ܼ�
class Director : public IHandler
{
public:
	Director() {}
	~Director() {}
	virtual void HandleRequest(float days) override {
		if (days <= 3) {
			std::cout << "Director ��׼�� " << days << " ���" << std::endl;
		}
		else {
			m_pSuccessor->HandleRequest(days);
		}
	}
};

// �ܲ�
class CEO : public IHandler
{
public:
	CEO() {}
	~CEO() {}
	virtual void HandleRequest(float days) override {
		if (days <= 7) {
			std::cout << "CEO ��׼�� " << days << " ���" << std::endl;
		}
		else {
			std::cout << "����ų��٣��Ժ������ϰ�����" << std::endl;
		}
	}
};

#endif // CONCRETE_HANDLER_H