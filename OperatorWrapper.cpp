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
	在开发阶段，子系统往往因为不断的重构而变的越来越复杂，增加外观Facade可以提供一个简单的接口，减少它们之间的依赖。

	在维护阶段，可能这个系统已经非常难以维护和扩展了，此时你可以为新系统开发一个外观类，
	来提供设计粗糙或高度复杂的遗留代码的比较清晰简单的接口，让新系统与Facade对象交互，Facade与遗留代码交互所有复杂的工作。
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