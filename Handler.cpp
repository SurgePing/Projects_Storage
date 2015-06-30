#include "StdAfx.h"
#include "Handler.h"

Handler::Handler(void)
{
	m_pSuc = NULL;
}

Handler::~Handler(void)
{
	delete m_pSuc;
}

void Handler::SetSuccessor(Handler* pHandler)
{
	m_pSuc = pHandler;
}

Handler* Handler::GetSuccessor()
{
	return m_pSuc;
}

HandlerA::HandlerA()
{
	
}

HandlerA::~HandlerA()
{

}

//100-500,��HandlerA������500-1000����HandlerB������1000-2000��HandlerC������
void HandlerA::HandleRequest(int iRequest)
{
	if((iRequest >= 100) && (iRequest <= 500))
	{
		cout << "HandlerA Deal Result:" << iRequest << endl;
	}
	else if(this->GetSuccessor() != NULL)
	{
		this->GetSuccessor()->HandleRequest(iRequest);
	}
	else
	{
		cout << "can't deal request:" << iRequest << endl;
	}
}

HandlerB::HandlerB()
{

}

HandlerB::~HandlerB()
{

}

//100-500,��HandlerA������500-1000����HandlerB������1000-2000��HandlerC������
void HandlerB::HandleRequest(int iRequest)
{
	if((iRequest >= 500) && (iRequest <= 1000))
	{
		cout << "HandlerB Deal Result:" << iRequest << endl;
	}
	else if(this->GetSuccessor() != NULL)
	{
		this->GetSuccessor()->HandleRequest(iRequest);
	}
	else
	{
		cout << "can't deal request:" << iRequest << endl;
	}
}

HandlerC::HandlerC()
{

}

HandlerC::~HandlerC()
{

}

//100-500,��HandlerA������500-1000����HandlerB������1000-2000��HandlerC������
void HandlerC::HandleRequest(int iRequest)
{
	if((iRequest >= 1000) && (iRequest <= 2000))
	{
		cout << "HandlerC Deal Result:" << iRequest << endl;
	}
	else if(this->GetSuccessor() != NULL)
	{
		this->GetSuccessor()->HandleRequest(iRequest);
	}
	else
	{
		cout << "can't deal request:" << iRequest << endl;
	}
}