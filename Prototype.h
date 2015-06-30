#pragma once

class Prototype
{
protected:
	char* m_strName;
public:
	Prototype(){};
	virtual ~Prototype(){};

	virtual void Show() = 0;
	virtual Prototype* Clone() = 0;	
};

class ConcretePrototypeA:public Prototype
{
public:
	ConcretePrototypeA();
	ConcretePrototypeA(const char* pStr);
	ConcretePrototypeA(const ConcretePrototypeA& r);	//�������캯��
	~ConcretePrototypeA();	

	void Show();
	Prototype* Clone();	//��¡��ԭ��ģʽ�Ĺؼ�����,��ʵ����ʵ�ֿ������캯��
};

class ConcretePrototypeB:public Prototype
{
public:
	ConcretePrototypeB();
	ConcretePrototypeB(const char* pStr);
	ConcretePrototypeB(const ConcretePrototypeB& r);	//�������캯��
	~ConcretePrototypeB();	

	void Show();
	Prototype* Clone();	//��¡��ԭ��ģʽ�Ĺؼ�����
};