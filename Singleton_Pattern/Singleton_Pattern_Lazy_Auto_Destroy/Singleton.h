#pragma once
#include<mutex>
#include<iostream>

class Singleton
{
public:

	static Singleton* GetInstance();

private:
	Singleton() {};

	static Singleton *m_pSingleton;
	static std::mutex m_mutex;

	class GC//Garbage Collection 
	{
	public:
		~GC()
		{
			if (m_pSingleton != nullptr)
			{
				std::cout << "Destroy res" << std::endl;

				delete m_pSingleton;
				m_pSingleton = nullptr;
			}
		}


	public:
		static GC gc;

	};

};
