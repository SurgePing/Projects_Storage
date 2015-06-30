#pragma once
#include <iostream>
using namespace std;

class OS
{
public:
	OS(void){}
	virtual ~OS(void){}

	virtual void InstallOSImpl()
	{

	}
};

class LinuxOS : public OS
{
public:
	LinuxOS(void){}
	virtual ~LinuxOS(void){}

	virtual void InstallOSImpl()
	{
		cout << "Install LinuxOS." << endl;
	}
};

class UnixOS : public OS
{
public:
	UnixOS(void){}
	virtual ~UnixOS(void){}

	virtual void InstallOSImpl()
	{
		cout << "Install UnixOS." << endl;
	}
};

class WindowsOS : public OS
{
public:
	WindowsOS(void){}
	virtual ~WindowsOS(void){}

	virtual void InstallOSImpl()
	{
		cout << "Install WindowsOS." << endl;
	}
};