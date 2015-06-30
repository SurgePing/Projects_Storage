/************************************************************************/
/*代理(Proxy)模式
定义：为其他对象提供一种代理以控制对这个对象的访问。

代理模式的要点：
1）代理模式与真实对象有同样的接口，这样保证在任何使用RealSubject的地方都可以使用 Proxy。
2）Proxy保存一个真实对象的引用，这样可以访问 RealSubject 对象。

代理模式分为四种情况：（1）远程代理，（2）虚代理，（3）保护代理，（4）智能引用。
下面的代码设计介绍的是虚代理，虚代理是当创建开销很大时，通过代理来存放需要很长时间的真实对象。

举例说明：
我们有时打开一个网站时会发现有这样的现象，网站上的文字都显示出来了，但是上面的图片还没显示，要等一会才能显示。
这些未打开的图片的位置上，还是会有图片框和一些等待的信息的，这就是代理模式的应用，此时的代理存储了真实图片的路径和尺寸也用来显示一些友好的信息。                                                                      */
/************************************************************************/

#pragma once

class BigImage 
{ 
public: 
	BigImage(string name);
	virtual ~BigImage(); 

	virtual void Show();

protected:   
	string m_imageName; 
}; 

//真实类  
class RealBigImage: public BigImage   
{ 
public: 
	RealBigImage(string name); 
	~RealBigImage();

	void Show();
}; 

//代理 （通过代理访问实体） 
class Proxy: public BigImage   
{ 
private:   
	RealBigImage *m_bigImage; 

public:   
	Proxy(string name);
	~Proxy();

	void Show();
};  