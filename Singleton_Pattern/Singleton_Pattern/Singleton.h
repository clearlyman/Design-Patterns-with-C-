#pragma once
#include<mutex>

class Singleton
{
public:

	static Singleton* GetInstance();
	static void DestroyInstance();

private:
	Singleton() {};

	static Singleton *m_pSingleton;
	static std::mutex m_mutex;

};
