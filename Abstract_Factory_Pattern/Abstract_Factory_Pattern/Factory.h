#pragma once
#include"Concrect_Product.h"

class AFcatory
{
public:
	enum class FACTORY_TYPE
	{
		BENZ_F,
		BMW_F,
		AUDI_F
	};

	//What the factory produce
	virtual ICar* CreateCar() = 0;
	virtual IBike* CreateBike() = 0;

	static AFcatory* CreateFactory(FACTORY_TYPE type);//Choose Factory
};

