#pragma once
#include "Appliances.h"
#include "Device.h"

class RobotCleaner : public Device, Appliances
{
public:
	RobotCleaner(int bateryLife, int weght, int square);

	void showSpec() override;

protected:
	int _square;
};