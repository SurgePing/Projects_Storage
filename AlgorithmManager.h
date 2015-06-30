#pragma once

enum AlgorithmType{
	A_TYPE,
	B_TYPE,
	C_TYPE,
};

class AlgorithmBase
{
public:
	virtual void Replace() = 0;
};

class AlgorithmA : public AlgorithmBase
{
public:
	AlgorithmA();
	~AlgorithmA();

	virtual void Replace();
};

class AlgorithmB : public AlgorithmBase
{
public:
	AlgorithmB();
	~AlgorithmB();

	virtual void Replace();
};

class AlgorithmC : public AlgorithmBase
{
public:
	AlgorithmC();
	~AlgorithmC();

	virtual void Replace();
};