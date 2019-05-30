#ifndef IMPLEMENTOR_H
#define IMPLEMENTOR_H

// ����
class IElectricalEquipment
{
public:
	virtual ~IElectricalEquipment() {}

	// ��
	virtual void PowerOn() = 0;

	// �ر�
	virtual void PowerOff() = 0;
};

#endif // IMPLEMENTOR_H