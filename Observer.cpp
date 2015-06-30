#include "StdAfx.h"
#include "Observer.h"

Observer::Observer()
{
	m_strData = "";
}

Observer::~Observer()
{

}

ChartObserver::ChartObserver(Subject* pSub)
{
	m_pSub = pSub;
	m_pSub->AddObserver(this);
}

ChartObserver::~ChartObserver()
{
	m_pSub->RemoveObserver(this);
	if(m_pSub)
	{
		delete m_pSub;
	}
}

void ChartObserver::Update(Subject* pSub)
{
	m_pSub = pSub;
	PrintInfo();
}

void ChartObserver::PrintInfo()
{
	cout << " Chart Observer..." << m_pSub->GetState() << endl;
}

SheetObserver::SheetObserver(Subject* pSub)
{
	m_pSub = pSub;
	m_pSub->AddObserver(this);
}

SheetObserver::~SheetObserver()
{
	m_pSub->RemoveObserver(this);
	if(m_pSub)
	{
		delete m_pSub;
	}
}

void SheetObserver::Update(Subject* pSub)
 {
	 m_pSub = pSub;
	 PrintInfo();
 }
 
void SheetObserver::PrintInfo()
 {
	cout << " Sheet Observer..." << m_pSub->GetState() << endl;
 }