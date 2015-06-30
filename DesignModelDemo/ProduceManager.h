#pragma once

//²úÆ·Àà
class Produce
{
public:
	virtual ~Produce(void);

	virtual void PrintInfo() = 0;
};

class ProduceA : public Produce
{
public:
	ProduceA();
	virtual ~ProduceA();

	virtual void PrintInfo();
};

class ProduceB : public Produce
{
public:
	ProduceB();
	virtual ~ProduceB();

	virtual void PrintInfo();
};

class ClassB
{
public:
	virtual ~ClassB(void);

	virtual void PrintInfo() = 0;
};