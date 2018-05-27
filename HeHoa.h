#pragma once
#include "NguHanh.h"
class HeHoa :
	public NguHanh
{
public:
	HeHoa();
	~HeHoa();
	bool Is_K(NguHanh*);
	bool Is_S(NguHanh*);
	int ReturnValueNguHanh();
	void HienThiNguHanh();
};

