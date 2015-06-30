#pragma once
#include "AlgorithmManager.h"

class ClientOperator
{
private:
	AlgorithmBase* m_pAlgorithmBase;
public:
	ClientOperator(AlgorithmType eAlgorithmType);
	~ClientOperator(void);
	void Operator();
	void SetAlgorithm(AlgorithmType eAlgorithmType);
};
