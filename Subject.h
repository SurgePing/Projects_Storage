#pragma once
#include "Observer.h"
#include <list>

class Observer;
//通知者基类
class Subject
{
public:
	virtual ~Subject();
	
	void AddObserver(Observer* p0bv);
	void RemoveObserver(Observer* p0bv);
	void Notify();

	virtual void SetState(string strData) = 0;
	virtual string GetState() = 0;
protected:
		Subject();
private:
	list<Observer*>* m_pObserverList;
};

class DataSubject : public Subject
{
public:
	DataSubject();
	virtual ~DataSubject();

	void SetState(string strData);
	string GetState();

private:
	string m_strData;
};