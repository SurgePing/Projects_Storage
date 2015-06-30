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
	
	virtual void Update(Subject* pSub);	//Ҳ�����ɹ۲����Լ����ø��º��������Դ�������ԭ�򣬿����������˸�֪ͨ�ߵĻ��������ͼ�������Ҫ��ʾ���֪ͨ�ߵ������ˣ�������ƣ������ϻ�Ϻ���Щ
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