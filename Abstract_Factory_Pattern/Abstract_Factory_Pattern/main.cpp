#include"Concrect_Factory.h"
#include<iostream>

#ifndef DELETE
#define DELETE(p) {if (p) {delete p; p = nullptr;}}
#endif // !DELETE

int main()
{
	AFcatory *pFactory = AFcatory::CreateFactory(AFcatory::FACTORY_TYPE::BENZ_F);
	ICar *pCar = pFactory->CreateCar();
	IBike *pBike = pFactory->CreateBike();
	std::cout << pCar->Name() << " and " << pBike->Name() << std::endl;

	pFactory = AFcatory::CreateFactory(AFcatory::FACTORY_TYPE::BMW_F);
	pCar = pFactory->CreateCar();
	pBike = pFactory->CreateBike();
	std::cout << pCar->Name() << " and " << pBike->Name() << std::endl;

	DELETE(pFactory);
	DELETE(pCar);
	DELETE(pBike);

	system("pause");
	return 0;
}