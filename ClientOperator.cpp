#include "StdAfx.h"
#include "ClientOperator.h"

ClientOperator::ClientOperator(AlgorithmType eAlgorithmType)
{
	//跟简单工厂模式一起使用,这样一起使用的好处是不会暴露算法的定义
	if(A_TYPE == eAlgorithmType)
	{
		m_pAlgorithmBase = new AlgorithmA();
	}
	else if(B_TYPE == eAlgorithmType)
	{
		m_pAlgorithmBase = new AlgorithmB();
	}
	else if(C_TYPE == eAlgorithmType)
	{
		m_pAlgorithmBase = new AlgorithmC();
	}
}

ClientOperator::~ClientOperator(void)
{
	if(m_pAlgorithmBase)
	{
		delete m_pAlgorithmBase;
		m_pAlgorithmBase = NULL;
	}
}

void ClientOperator::Operator()
{
	m_pAlgorithmBase->Replace();
}

void ClientOperator::SetAlgorithm(AlgorithmType eAlgorithmType)
{
	delete m_pAlgorithmBase;

	if(A_TYPE == eAlgorithmType)
	{
		m_pAlgorithmBase = new AlgorithmA();
	}
	else if(B_TYPE == eAlgorithmType)
	{
		m_pAlgorithmBase = new AlgorithmB();
	}
	else if(C_TYPE == eAlgorithmType)
	{
		m_pAlgorithmBase = new AlgorithmC();
	}
}
