#pragma once
#include "NguHanh.h"
class HeKim :
	public NguHanh
{
public:
	HeKim();
	~HeKim();
	bool Is_K(NguHanh*);
	bool Is_S(NguHanh*);
	int ReturnValueNguHanh();
	void HienThiNguHanh();
};

