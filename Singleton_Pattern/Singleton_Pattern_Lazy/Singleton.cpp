#include "Singleton.h"
#include<iostream>


Singleton* Singleton::m_pSingleton = new Singleton();

Singleton * Singleton::GetInstance()
{
	return m_pSingleton;
}

void Singleton::DestroyInstance()
{
	if (m_pSingleton != nullptr)
	{
		std::cout << "Destroy res" << std::endl;

		delete m_pSingleton;
		m_pSingleton = nullptr;
	}
}
