#pragma once

class Resume
{
protected:	//保护成员
	virtual void SetPersonInfo(){}
	virtual void SetEducation(){}
	virtual void SetWorkExp(){}

public:
	void FillResume()
	{
		SetPersonInfo();
		SetEducation();
		SetWorkExp();
	}
};

class ResumeA:public Resume
{
protected:
	void SetPersonInfo();
	void SetEducation();
	void SetWorkExp();
};

class ResumeB:public Resume
{
protected:
	void SetPersonInfo();
	void SetEducation();
	void SetWorkExp();
};