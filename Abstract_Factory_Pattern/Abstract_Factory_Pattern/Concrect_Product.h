#pragma once
#include"Product.h"

class BenzCar :public ICar
{
public:
	std::string Name() override
	{
		return "Benz Car";
	}
};

class BMWCar :public ICar
{
public:
	std::string Name() override
	{
		return "BMW Car";
	}
};

class AudiCar :public ICar
{
public:
	std::string Name() override
	{
		return "Audi Car";
	}
};

class BenzBike :public IBike
{
public:
	std::string Name() override
	{
		return "Benz Bike";
	}
};

class BMWBike :public IBike
{
public:
	std::string Name() override
	{
		return "BMW Bike";
	}
};

class AudiBike :public IBike
{
public:
	std::string Name() override
	{
		return "Audi Bike";
	}
};