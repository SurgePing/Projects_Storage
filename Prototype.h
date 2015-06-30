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
	ConcretePrototypeA(const ConcretePrototypeA& r);	//拷贝构造函数
	~ConcretePrototypeA();	

	void Show();
	Prototype* Clone();	//克隆，原型模式的关键所在,其实就是实现拷贝构造函数
};

class ConcretePrototypeB:public Prototype
{
public:
	ConcretePrototypeB();
	ConcretePrototypeB(const char* pStr);
	ConcretePrototypeB(const ConcretePrototypeB& r);	//拷贝构造函数
	~ConcretePrototypeB();	

	void Show();
	Prototype* Clone();	//克隆，原型模式的关键所在
};