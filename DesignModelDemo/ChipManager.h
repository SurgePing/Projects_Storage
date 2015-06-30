#pragma once

//–æ∆¨¿‡
class Chip
{
public:
	virtual void PrintChipInfo() = 0;
};

class ChipA : public Chip
{
public:
	ChipA();
	~ChipA();
	virtual void PrintChipInfo();
};

class ChipB : public Chip
{
public:
	ChipB();
	~ChipB();
	virtual void PrintChipInfo();
};
