#pragma once
#include"concrete_product.h"

class Factory
{
public:
	enum class CAT_TYPE
	{
		BENZ_CAR,
		BMW_CAR,
		AUDI_CAR
	};
	
	ICar* CreateCar(CAT_TYPE type)
	{
		ICar *pCar = nullptr;

		switch (type)
		{
		case CAT_TYPE::BENZ_CAR:
			pCar = new Benz();
			break;
		case CAT_TYPE::BMW_CAR:
			pCar = new BMW();
			break;
		case CAT_TYPE::AUDI_CAR:
			pCar = new Audi();
			break;
		default:
			break;
		}

		return pCar;
	}
};