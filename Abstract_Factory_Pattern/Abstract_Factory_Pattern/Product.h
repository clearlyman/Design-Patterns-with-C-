#pragma once
#include<string>

class ICar
{
public:
	virtual std::string Name() = 0;
};

class IBike
{
public:
	virtual std::string Name() = 0;
};