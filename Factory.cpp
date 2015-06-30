#include "StdAfx.h"
#include "Factory.h"

FactoryA::FactoryA(void)
{

}

FactoryA::~FactoryA(void)
{

}

Produce* FactoryA::CreateProduce()
{
	return new ProduceA;
}

Chip* FactoryA::CreateChip()
{
	return new ChipA;
}

FactoryB::FactoryB(void)
{

}

FactoryB::~FactoryB(void)
{
}

Produce* FactoryB::CreateProduce()
{
	return new ProduceB;
}

Chip* FactoryB::CreateChip()
{
	return new ChipB;
}