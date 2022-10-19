#pragma once

#include<iostream>
#include<string>
using namespace std;

class IElectronics
{
public:
	virtual void showSpec() = 0;
	virtual ~IElectronics() = default;
};