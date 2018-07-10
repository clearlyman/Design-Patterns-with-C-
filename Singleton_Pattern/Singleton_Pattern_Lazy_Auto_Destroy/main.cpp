#include"Singleton.h"
#include<iostream>

Singleton::GC Singleton::GC::gc;//declare, important

int main()
{
	Singleton *pSingleton1 = Singleton::GetInstance();
	Singleton *pSingleton2 = Singleton::GetInstance();


	std::cout << ((pSingleton1 == pSingleton2) ? 1 : 0) << std::endl;

	//system("pause");
	return 0;
}
