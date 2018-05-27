#include "stdafx.h"
#include "HeKim.h"
#include <iostream>
using namespace std;

HeKim::HeKim()
{
}


HeKim::~HeKim()
{
}

bool HeKim::Is_K(NguHanh *h)
{
	if (h->ReturnValueNguHanh() == 2)
		return true;
	return false;
}

bool HeKim::Is_S(NguHanh *h)
{
	if (h->ReturnValueNguHanh() == 3)
		return true;
	return false;
}

int HeKim::ReturnValueNguHanh()
{
	return 1;
}

void HeKim::HienThiNguHanh()
{
	this->setMau(14);
	cout << "He Kim";
	this->setMau(15);
}
