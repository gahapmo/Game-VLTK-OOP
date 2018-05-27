#include "stdafx.h"
#include "HeMoc.h"

HeMoc::HeMoc()
{
}


HeMoc::~HeMoc()
{
}

bool HeMoc::Is_K(NguHanh *h)
{
	if (h->ReturnValueNguHanh() == 5)
		return true;
	return false;
}

bool HeMoc::Is_S(NguHanh *h)
{
	if (h->ReturnValueNguHanh() == 4)
		return true;
	return false;
}

int HeMoc::ReturnValueNguHanh()
{
	return 2;
}

void HeMoc::HienThiNguHanh()
{
	this->setMau(10);
	cout << "He Moc";
	this->setMau(15);
}
