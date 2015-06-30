#pragma once
#include "ProduceManager.h"
#include "ChipManager.h"

class Factory
{
public:
	virtual Produce* CreateProduce() = 0;
	virtual Chip* CreateChip() = 0;
};

class FactoryA : public Factory
{
public:
	FactoryA(void);
	virtual ~FactoryA(void);

	Produce* CreateProduce();
	Chip* CreateChip();
};

class FactoryB : public Factory
{
public:
	FactoryB(void);
	virtual ~FactoryB(void);

	Produce* CreateProduce();
	Chip* CreateChip();
};
