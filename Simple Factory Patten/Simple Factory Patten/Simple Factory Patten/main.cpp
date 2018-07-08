#include"factory.h"
#include<iostream>

int main()
{
	Factory *pFactory = new Factory();

	//Benz
	ICar *pCar = pFactory->CreateCar(Factory::CAT_TYPE::BENZ_CAR);
	std::cout << pCar->Name() << std::endl;

	//BMW
	pCar = pFactory->CreateCar(Factory::CAT_TYPE::BMW_CAR);
	std::cout << pCar->Name() << std::endl;

	//Audi
	pCar = pFactory->CreateCar(Factory::CAT_TYPE::AUDI_CAR);
	std::cout << pCar->Name() << std::endl;


	system("pause");
	return 0;
}