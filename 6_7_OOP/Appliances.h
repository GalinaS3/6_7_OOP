#pragma once
#include "IElectronics.h"

class Appliances : virtual public IElectronics
{
public:
	Appliances(int weght);

	void showSpec() override;

protected:
	int _weght;
};

class Iron : public Appliances
{
public:
	Iron(int weght, string soleplate);

	void showSpec() override;

protected:
	string _soleplate;
};

class Teapot : public Appliances
{
public:
	Teapot(int weght, float volume);

	void showSpec() override;

protected:
	float _volume;
};