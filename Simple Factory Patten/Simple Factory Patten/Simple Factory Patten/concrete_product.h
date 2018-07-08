#pragma once
#include"product.h"

class Benz :public ICar
{
	std::string Name() override
	{
		return "Benz Car";
	}
};

class BMW :public ICar
{
	std::string Name() override
	{
		return "BMW Car";
	}
};

class Audi :public ICar
{
	std::string Name() override
	{
		return "Aui Car";
	}
};
