#include "StdAfx.h"
#include "Subject.h"

Subject::Subject()
{
	m_pObserverList = new list<Observer*>;
}

Subject::~Subject()
{
	delete m_pObserverList;
}

void Subject::AddObserver(Observer* p0bv)
{
	m_pObserverList->push_back(p0bv);
}

void Subject::RemoveObserver(Observer* p0bv)
{
	if(p0bv)
	{
		m_pObserverList->remove(p0bv);
	}
}

void Subject::Notify()
{
	//通知操作，遍历链表通知每个注册过的观察者
	list<Observer*>::iterator iBegin = m_pObserverList->begin();
	list<Observer*>::iterator iEnd = m_pObserverList->end();
	while(iBegin != iEnd)
	{
		//更新操作
		(*iBegin)->Update(this);
		iBegin++;
	}
}

DataSubject::DataSubject()
{
	m_strData = "";
}

DataSubject::~DataSubject()
{

}

void DataSubject::SetState(string strData)
{
	m_strData = strData;
}

string DataSubject::GetState()
{
	return m_strData;
}