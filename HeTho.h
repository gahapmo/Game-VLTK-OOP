#pragma once
#include "NguHanh.h"
class HeTho :
	public NguHanh
{
public:
	HeTho();
	~HeTho();
	bool Is_K(NguHanh*);
	bool Is_S(NguHanh*);
	int ReturnValueNguHanh();
	void HienThiNguHanh();
};

