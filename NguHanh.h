#pragma once
#include <iostream>
using namespace std;

class NguHanh
{
public:
	NguHanh();
	~NguHanh();
	virtual bool Is_K(NguHanh*);
	virtual bool Is_S(NguHanh*);
	virtual int ReturnValueNguHanh();
	virtual void HienThiNguHanh();
public:
	void setMau(int k);
};

