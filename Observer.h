#pragma once
#include "Subject.h"

class Subject;
class Observer
{
public:
	virtual ~Observer();

	virtual void Update(Subject* pSub) = 0;	
	virtual void PrintInfo() = 0;
protected:
	Observer();

	string m_strData;
};

class ChartObserver : public Observer
{
public:
	ChartObserver(Subject* pSub);
	virtual ~ChartObserver();
	
	virtual void Update(Subject* pSub);	//也可以由观察者自己调用更新函数。所以带参数的原因，可能是若换了个通知者的话，比如该图表或许需要显示别的通知者的数据了，这样设计，代码上会较合理些
	virtual void PrintInfo();
private:
	Subject* m_pSub;
};

class SheetObserver : public Observer
{
public:
	SheetObserver(Subject* pSub);
	virtual ~SheetObserver();

	virtual void Update(Subject* pSub);
	virtual void PrintInfo();
private:
	Subject* m_pSub;

};