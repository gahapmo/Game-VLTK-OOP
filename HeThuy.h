#pragma once
#include "NguHanh.h"
class HeThuy :
	public NguHanh
{
public:
	HeThuy();
	~HeThuy();
	bool Is_K(NguHanh*);
	bool Is_S(NguHanh*);
	int ReturnValueNguHanh();
	void HienThiNguHanh();
};

