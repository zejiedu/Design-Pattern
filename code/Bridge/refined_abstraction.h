#ifndef REFINED_ABSTRACTION_H
#define REFINED_ABSTRACTION_H

#include "abstraction.h"
#include <iostream>

// ����ʽ����
class PullChainSwitch : public ISwitch
{
public:
	PullChainSwitch(IElectricalEquipment *ee) : ISwitch(ee) {}

	// ������ʽ���ش򿪵���
	virtual void On() override {
		std::cout << "Switch on the equipment with a pull chain switch." << std::endl;
		m_pEe->PowerOn();
	}

	// ������ʽ���عرյ���
	virtual void Off() override {
		std::cout << "Switch off the equipment with a pull chain switch." << std::endl;
		m_pEe->PowerOff();
	}
};

// ��λ����
class TwoPositionSwitch : public ISwitch
{
public:
	TwoPositionSwitch(IElectricalEquipment *ee) : ISwitch(ee) {}

	// ����λ���ش򿪵���
	virtual void On() override {
		std::cout << "Switch on the equipment with a two-position switch." << std::endl;
		m_pEe->PowerOn();
	}

	// ����λ���عرյ���
	virtual void Off() override {
		std::cout << "Switch off the equipment with a two-position switch." << std::endl;
		m_pEe->PowerOff();
	}
};

#endif // REFINED_ABSTRACTION_H