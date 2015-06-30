#include "StdAfx.h"
#include "OperatorWrapper.h"
#include "ZipFileSys.h"
#include "KillVirusSys.h"
#include "EncryptionFileSys.h"

OperatorWrapper::OperatorWrapper(void)
{
}

OperatorWrapper::~OperatorWrapper(void)
{
}

void OperatorWrapper::MethodA()
{
	/*
	�ڿ����׶Σ���ϵͳ������Ϊ���ϵ��ع������Խ��Խ���ӣ��������Facade�����ṩһ���򵥵Ľӿڣ���������֮���������

	��ά���׶Σ��������ϵͳ�Ѿ��ǳ�����ά������չ�ˣ���ʱ�����Ϊ��ϵͳ����һ������࣬
	���ṩ��ƴֲڻ�߶ȸ��ӵ���������ıȽ������򵥵Ľӿڣ�����ϵͳ��Facade���󽻻���Facade���������뽻�����и��ӵĹ�����
	*/
	ZipFileSys zipFileSys;
	zipFileSys.OperatorSys();

	EncryptionFileSys encryFileSys;
	encryFileSys.OperatorSys();

	KillVirusSys killVirusSys;
	killVirusSys.OperatorSys();
}

void OperatorWrapper::MethodB()
{
	ZipFileSys zipFileSys;
	zipFileSys.OperatorSys();

	EncryptionFileSys encryFileSys;
	encryFileSys.OperatorSys();
}