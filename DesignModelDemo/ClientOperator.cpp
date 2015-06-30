#include "StdAfx.h"
#include "ClientOperator.h"

ClientOperator::ClientOperator(AlgorithmType eAlgorithmType)
{
	//���򵥹���ģʽһ��ʹ��,����һ��ʹ�õĺô��ǲ��ᱩ¶�㷨�Ķ���
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
