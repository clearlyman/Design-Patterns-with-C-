#include<iostream>
#include"concrect__factory.h"

#ifndef DELETE
#define DELETE(p) {if (p) {delete p; p = nullptr;} }
#endif // !DELETE

int main()
{
	//Benz
	AFactory *pFactory = new BenzFactory();
	ICar *pICar = pFactory->CreateCar();
	std::cout << pICar->Name() << std::endl;

	//BMW
	pFactory = new BMWFactory();
	pICar = pFactory->CreateCar();
	std::cout << pICar->Name() << std::endl;

	//Audi
	pFactory = new AudiFactory();
	pICar = pFactory->CreateCar();
	std::cout << pICar->Name() << std::endl;

	DELETE(pFactory);
	DELETE(pICar);

	system("pause");
	return 0;
}