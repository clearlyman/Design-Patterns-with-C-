#include"Singleton.h"
#include<iostream>


 Singleton* Singleton::m_pSingleton = nullptr;
 std::mutex Singleton::m_mutex;

 Singleton* Singleton::GetInstance()
 {
	 if (m_pSingleton == nullptr)
	 {
		 std::lock_guard<std::mutex> lock(m_mutex);
		 m_pSingleton = new Singleton();
	 }
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