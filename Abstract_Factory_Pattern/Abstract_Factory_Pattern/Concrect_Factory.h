#pragma once
#include"Factory.h"

class BenzFacroy :public AFcatory
{
public:
	ICar* CreateCar() override
	{
		return new BenzCar();
	}

	IBike* CreateBike() override
	{
		return new BenzBike();
	}
};

class BMWFacroy :public AFcatory
{
public:
	ICar* CreateCar() override
	{
		return new BMWCar();
	}

	IBike* CreateBike() override
	{
		return new BMWBike();
	}
};

class AudiFacroy :public AFcatory
{
public:
	ICar* CreateCar() override
	{
		return new AudiCar();
	}

	IBike* CreateBike() override
	{
		return new AudiBike();
	}
};