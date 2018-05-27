#include "stdafx.h"
#include "HeThuy.h"


HeThuy::HeThuy()
{
}


HeThuy::~HeThuy()
{
}

bool HeThuy::Is_K(NguHanh *h)
{
	if (h->ReturnValueNguHanh() == 4)
		return true;
	return false;
}

bool HeThuy::Is_S(NguHanh *h)
{
	if (h->ReturnValueNguHanh() == 2)
		return true;
	return false;
}

int HeThuy::ReturnValueNguHanh()
{
	return 3;
}

void HeThuy::HienThiNguHanh()
{
	this->setMau(11);
	cout << "He Thuy";
	this->setMau(15);
}
