#pragma once
#include"concrect_product.h"

class AFactory
{
public:
	virtual ICar* CreateCar() = 0;
};