#include "stdafx.h"
#include "HeTho.h"


HeTho::HeTho()
{
}


HeTho::~HeTho()
{
}

bool HeTho::Is_K(NguHanh *h)
{
	if (h->ReturnValueNguHanh() == 3)
		return true;
	return false;
}

bool HeTho::Is_S(NguHanh *h)
{
	if (h->ReturnValueNguHanh() == 1)
		return true;
	return false;
}

int HeTho::ReturnValueNguHanh()
{
	return 5;
}

void HeTho::HienThiNguHanh()
{
	this->setMau(13);
	cout << "He Tho";
	this->setMau(15);
}
