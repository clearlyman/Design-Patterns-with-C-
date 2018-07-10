#include"Singleton.h"
#include<iostream>

int main()
{
	Singleton *pSingleton1 = Singleton::GetInstance();
	Singleton *pSingleton2 = Singleton::GetInstance();


	std::cout << ((pSingleton1 == pSingleton2) ? 1 : 0) << std::endl;

	pSingleton1->DestroyInstance();

	system("pause");
	return 0;
}
