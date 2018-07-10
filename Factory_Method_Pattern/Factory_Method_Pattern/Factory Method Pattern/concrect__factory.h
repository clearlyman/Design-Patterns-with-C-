#pragma once
#include"Factory.h"

class BenzFactory :public AFactory
{
public:
	ICar * CreateCar() override
	{
		return new Benz();
	}
};

class BMWFactory :public AFactory
{
public:
	ICar * CreateCar() override
	{
		return new BMW();
	}
};

class AudiFactory :public AFactory
{
public:
	ICar * CreateCar() override
	{
		return new Audi();
	}
};