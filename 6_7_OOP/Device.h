#pragma once
#include "IElectronics.h"

class Device : virtual public IElectronics
{
public:
	Device(int bateryLife);

	virtual void showSpec() override;

protected:
	int _bateryLife;
};

class Player : public Device
{
public:
	Player(int bateryLife, int tracks);

	void showSpec() override;

protected:
	int _tracks;
};

class Smartphone : public Device
{
public:
	Smartphone(int bateryLife, float diagonal);

	void showSpec() override;

protected:
	float _diagomal;
};