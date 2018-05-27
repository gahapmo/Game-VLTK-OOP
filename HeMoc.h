#pragma once
#include "NguHanh.h"
class HeMoc :
	public NguHanh
{
public:
	HeMoc();
	~HeMoc();
	bool Is_K(NguHanh*);
	bool Is_S(NguHanh*);
	int ReturnValueNguHanh();
	void HienThiNguHanh();
};

