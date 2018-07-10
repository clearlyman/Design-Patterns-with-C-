#pragma once

class Singleton
{
public:

	static Singleton* GetInstance();
	static void DestroyInstance();

private:
	Singleton() {};

	static Singleton *m_pSingleton;

};
