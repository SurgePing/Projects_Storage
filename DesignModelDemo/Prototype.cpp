#include "stdafx.h"
#include "Prototype.h"


ConcretePrototypeA::ConcretePrototypeA()
{

}

ConcretePrototypeA::ConcretePrototypeA(const char* pStr)
{
	if(NULL == pStr)
	{
		m_strName = new char[1];
		m_strName[0] = '\0';
	}
	else
	{
		m_strName = new char[strlen(pStr)+1];
		strcpy(m_strName, pStr);
	}
}

ConcretePrototypeA::ConcretePrototypeA(const ConcretePrototypeA& r)
{
	//Éî¿½±´
	m_strName = new char[strlen(r.m_strName)+1];
	strcpy(m_strName, r.m_strName);
}

ConcretePrototypeA::~ConcretePrototypeA()
{
	delete[] m_strName;
}

void ConcretePrototypeA::Show()
{
	cout << "ConcretePrototypeA name:" << m_strName << endl;
}

Prototype* ConcretePrototypeA::Clone()
{
	return new ConcretePrototypeA(*this);
}


ConcretePrototypeB::ConcretePrototypeB()
{

}

ConcretePrototypeB::ConcretePrototypeB(const char* pStr)
{
	if(NULL == pStr)
	{
		m_strName = new char[1];
		m_strName[0] = '\0';
	}
	else
	{
		m_strName = new char[strlen(pStr)+1];
		strcpy(m_strName, pStr);
	}
}

ConcretePrototypeB::ConcretePrototypeB(const ConcretePrototypeB& r)
{
	//Éî¿½±´
	m_strName = new char[strlen(r.m_strName)+1];
	strcpy(m_strName, r.m_strName);
}

ConcretePrototypeB::~ConcretePrototypeB()
{
	delete[] m_strName;
}

void ConcretePrototypeB::Show()
{
	cout << "ConcretePrototypeB name:" << m_strName << endl;
}

Prototype* ConcretePrototypeB::Clone()
{
	return new ConcretePrototypeB(*this);
}