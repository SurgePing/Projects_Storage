#include "stdafx.h"
#include "Proxy.h"

BigImage::BigImage(string name)
:m_imageName(name)
{
} 
BigImage::~BigImage()
{
} 

void BigImage::Show()
{
} 

RealBigImage::RealBigImage(string name)
:BigImage(name)
{
} 

RealBigImage::~RealBigImage()
{
} 

void RealBigImage::Show() 
{ 
	cout << "Show big image : " << m_imageName << endl; 
} 


Proxy::Proxy(string name)
:BigImage(name)
,m_bigImage(0) 
{
} 

Proxy::~Proxy() 
{ 
	delete m_bigImage; 
}

void Proxy::Show() 
{   
	if(m_bigImage == NULL) 
	{ 
		cout << "please wait ..." <<endl; //此处可以做加载默认图片操作
		m_bigImage = new RealBigImage(m_imageName); //代理创建真实对象  
	} 

	m_bigImage->Show();   
}  