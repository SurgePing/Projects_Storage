#pragma once


class Builder
{
public:
	virtual void BuildStep1() = 0;
	virtual void BuildStep2() = 0;
	virtual void BuildStep3() = 0;
	virtual void BuildStep4() = 0;
};

class KFCBuilder:public Builder
{
public:
	void BuildStep1();
	void BuildStep2();
	void BuildStep3();
	void BuildStep4();
};

class MCDBuilder:public Builder
{
public:
	void BuildStep1();
	void BuildStep2();
	void BuildStep3();
	void BuildStep4();
};

class Director
{
private:
	Builder*	m_pBuilder;

public:
	Director(Builder* pBuilder);

	void Create();
};