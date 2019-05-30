#ifndef ABSTRACTION_H
#define ABSTRACTION_H

#include "implementor.h"

// ����
class ISwitch
{
public:
	ISwitch(IElectricalEquipment *ee) { m_pEe = ee; }
	virtual ~ISwitch() {}

	// �򿪵���
	virtual void On() = 0;

	// �رյ���
	virtual void Off() = 0;

protected:
	IElectricalEquipment *m_pEe;
};

#endif // ABSTRACTION_H