// DesignModelDemo.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include "AlgorithmManager.h"
#include "ClientOperator.h"
#include "ProduceManager.h"
#include "Factory.h"
#include "Subject.h"
#include "Observer.h"
#include "Handler.h"
#include "Computer.h"
#include "Prototype.h"
#include "Resume.h"
#include "Builder.h"
#include "Proxy.h"


int _tmain(int argc, _TCHAR* argv[])
{
	//设计模式之策略模式C++实现
// 	ClientOperator clientOperatorObj(B_TYPE);
// 	clientOperatorObj.Operator();
// 
// 	clientOperatorObj.SetAlgorithm(A_TYPE);
// 	clientOperatorObj.Operator();
// 
// 	clientOperatorObj.SetAlgorithm(C_TYPE);
// 	clientOperatorObj.Operator();

	//设计模式之抽象工厂模式
// 	Factory* pFactory = new FactoryA();
// 	Produce* pProduce = pFactory->CreateProduce();
// 	pProduce->PrintInfo();
// 	pFactory = new FactoryB();
// 	pProduce = pFactory->CreateProduce();
// 	pProduce->PrintInfo();
// 
// 	Chip* pChip = pFactory->CreateChip();
// 	pChip->PrintChipInfo();

	//设计模式之外观模式。见FacadeModel目录
	
	//设计模式之观察者模式
// 	DataSubject* pDataSubject = new DataSubject;	//数据通知者
// 	
// 	Observer* pObv1 = new ChartObserver(pDataSubject);	//图表观察者
// 	Observer* pObv2 = new SheetObserver(pDataSubject);	//表格观察者
// 
// 	pDataSubject->SetState("Old Data...");
// 	pDataSubject->Notify();
// 
// 	pDataSubject->SetState("New Data...");
// 	pDataSubject->Notify();
// 
// 	pObv2->Update(pDataSubject);	//也可以由观察者自己调用更新函数

	//设计模式之职责链模式
// 	Handler* pH1 = new HandlerA();
// 	Handler* pH2 = new HandlerB();
// 	Handler* pH3 = new HandlerC();
// 
// 	pH1->SetSuccessor(pH2);
// 	pH2->SetSuccessor(pH3);
// 
// 	pH1->HandleRequest(300);
// 	pH1->HandleRequest(1900);
// 	pH1->HandleRequest(800);
// 	pH1->HandleRequest(3000);

	//设计模式之桥接模式
// 	OS* pOS1 = new LinuxOS();
// 	OS* pOS2 = new WindowsOS();
// 
// 	Computer* pComputer = new HPComputer();
// 	pComputer = NULL;
// 	pComputer->InstallOS(pOS2);
// 	pComputer->InstallOS(pOS1);

	//设计模式之原型模式
// 	Prototype* r1 = new ConcretePrototypeA("A");
// 	Prototype* r2 = new ConcretePrototypeB("B");
// 	Prototype* r3 = r1->Clone();
// 	Prototype* r4 = r2->Clone();
// 
// 	r1->Show();
// 	r2->Show();
// 	delete r1;
// 	delete r2;
// 	r1 = NULL;
// 	r2 = NULL;
// 
// 	r3->Show();//深拷贝对r3,r4无影响
// 	r4->Show();
// 	delete r3;
// 	delete r4;
// 	r3 = NULL;
// 	r4 = NULL;

	//设计模式之模板方法
// 	Resume* r = new ResumeA();
// 	r->FillResume();
// 	delete r;
// 
// 	r = new ResumeB();
// 	r->FillResume();
// 	delete r;
// 	r = NULL;

	//设计模式之建造者模式
// 	KFCBuilder kfc;
// 	Director director1(&kfc);
// 	director1.Create();
// 
// 	MCDBuilder mdc;
// 	Director director2(&mdc);
// 	director2.Create();

	//设计模式之代理模式
	BigImage *image = new Proxy("SomeBigPic.jpg"); //使用代理  
	image->Show(); //代理的操作  

	delete image; 

	while(1);
	return 0;
}

