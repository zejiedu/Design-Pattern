#ifndef CONCRETE_STRATEGY_H
#define CONCRETE_STRATEGY_H

#include "strategy.h"
#include <iostream>

// �����г�
class BikeStrategy : public IStrategy
{
public:
	virtual void Travel() override { std::cout << "Travel by bike" << std::endl; }
};

// ����
class CarStrategy : public IStrategy
{
public:
	virtual void Travel() override { std::cout << "Travel by car" << std::endl; }
};

// ����
class TrainStrategy : public IStrategy
{
public:
	virtual void Travel() override { std::cout << "Travel by train" << std::endl; }
};

#endif // CONCRETE_STRATEGY_H