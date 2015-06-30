#include "stdafx.h"
#include "Builder.h"

void KFCBuilder::BuildStep1()
{
	cout << "KFC BuildStep1" << endl;
}

void KFCBuilder::BuildStep2()
{
	cout << "KFC BuildStep2" << endl;
}

void KFCBuilder::BuildStep3()
{
	cout << "KFC BuildStep3" << endl;
}

void KFCBuilder::BuildStep4()
{
	cout << "KFC BuildStep4" << endl;
}

void MCDBuilder::BuildStep1()
{
	cout << "Mcdonalds  BuildStep1" << endl;
}

void MCDBuilder::BuildStep2()
{
	cout << "Mcdonalds  BuildStep2" << endl;
}

void MCDBuilder::BuildStep3()
{
	cout << "Mcdonalds  BuildStep3" << endl;
}

void MCDBuilder::BuildStep4()
{
	cout << "Mcdonalds  BuildStep4" << endl;
}


Director::Director(Builder* pBuilder)
{
	m_pBuilder = pBuilder;
}

void Director::Create()
{
	m_pBuilder->BuildStep1();
	m_pBuilder->BuildStep2();
	m_pBuilder->BuildStep3();
	m_pBuilder->BuildStep4();
}