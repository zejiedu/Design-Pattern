#ifndef CONCRETE_IMPLEMENTOR_H
#define CONCRETE_IMPLEMENTOR_H

#include "implementor.h"
#include <iostream>

// ���
class Light : public IElectricalEquipment
{
public:
	// ����
	virtual void PowerOn() override {
		std::cout << "Light is on." << std::endl;
	}

	// �ص�
	virtual void PowerOff() override {
		std::cout << "Light is off." << std::endl;
	}
};

// ����
class Fan : public IElectricalEquipment
{
public:
	// �򿪷���
	virtual void PowerOn() override {
		std::cout << "Fan is on." << std::endl;
	}

	// �رշ���
	virtual void PowerOff() override {
		std::cout << "Fan is off." << std::endl;
	}
};

#endif // CONCRETE_IMPLEMENTOR_H