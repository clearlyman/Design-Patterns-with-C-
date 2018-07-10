#include"factory.h"
#include<iostream>

#ifndef DELETE
#define DELETE(p) {if (p) {delete p; p = nullptr;} }
#endif // !DELETE


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

	DELETE(pFactory);

	system("pause");
	return 0;
}