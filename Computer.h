#pragma once
#include "OS.h"

class Computer
{
public:
	Computer(void){}
	virtual ~Computer(void){}

	virtual void InstallOS(OS* pOS)
	{

	}
};

class AppleComputer: public Computer
{
public:
	AppleComputer(void){}
	virtual ~AppleComputer(void){}

	virtual void InstallOS(OS* pOS)
	{
		pOS->InstallOSImpl(); 
	}
};

class HPComputer: public Computer
{
public:
	HPComputer(void){}
	virtual ~HPComputer(void){}

	virtual void InstallOS(OS* pOS)
	{
		pOS->InstallOSImpl(); 
	}
};

class DellComputer: public Computer
{
public:
	DellComputer(void){}
	virtual ~DellComputer(void){}

	virtual void InstallOS(OS* pOS)
	{
		pOS->InstallOSImpl(); 
	}
};
