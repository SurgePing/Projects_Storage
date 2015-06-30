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
	//���ģʽ֮����ģʽC++ʵ��
// 	ClientOperator clientOperatorObj(B_TYPE);
// 	clientOperatorObj.Operator();
// 
// 	clientOperatorObj.SetAlgorithm(A_TYPE);
// 	clientOperatorObj.Operator();
// 
// 	clientOperatorObj.SetAlgorithm(C_TYPE);
// 	clientOperatorObj.Operator();

	//���ģʽ֮���󹤳�ģʽ
// 	Factory* pFactory = new FactoryA();
// 	Produce* pProduce = pFactory->CreateProduce();
// 	pProduce->PrintInfo();
// 	pFactory = new FactoryB();
// 	pProduce = pFactory->CreateProduce();
// 	pProduce->PrintInfo();
// 
// 	Chip* pChip = pFactory->CreateChip();
// 	pChip->PrintChipInfo();

	//���ģʽ֮���ģʽ����FacadeModelĿ¼
	
	//���ģʽ֮�۲���ģʽ
// 	DataSubject* pDataSubject = new DataSubject;	//����֪ͨ��
// 	
// 	Observer* pObv1 = new ChartObserver(pDataSubject);	//ͼ��۲���
// 	Observer* pObv2 = new SheetObserver(pDataSubject);	//���۲���
// 
// 	pDataSubject->SetState("Old Data...");
// 	pDataSubject->Notify();
// 
// 	pDataSubject->SetState("New Data...");
// 	pDataSubject->Notify();
// 
// 	pObv2->Update(pDataSubject);	//Ҳ�����ɹ۲����Լ����ø��º���

	//���ģʽְ֮����ģʽ
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

	//���ģʽ֮�Ž�ģʽ
// 	OS* pOS1 = new LinuxOS();
// 	OS* pOS2 = new WindowsOS();
// 
// 	Computer* pComputer = new HPComputer();
// 	pComputer = NULL;
// 	pComputer->InstallOS(pOS2);
// 	pComputer->InstallOS(pOS1);

	//���ģʽ֮ԭ��ģʽ
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
// 	r3->Show();//�����r3,r4��Ӱ��
// 	r4->Show();
// 	delete r3;
// 	delete r4;
// 	r3 = NULL;
// 	r4 = NULL;

	//���ģʽ֮ģ�巽��
// 	Resume* r = new ResumeA();
// 	r->FillResume();
// 	delete r;
// 
// 	r = new ResumeB();
// 	r->FillResume();
// 	delete r;
// 	r = NULL;

	//���ģʽ֮������ģʽ
// 	KFCBuilder kfc;
// 	Director director1(&kfc);
// 	director1.Create();
// 
// 	MCDBuilder mdc;
// 	Director director2(&mdc);
// 	director2.Create();

	//���ģʽ֮����ģʽ
	BigImage *image = new Proxy("SomeBigPic.jpg"); //ʹ�ô���  
	image->Show(); //����Ĳ���  

	delete image; 

	while(1);
	return 0;
}

