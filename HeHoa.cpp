#include "stdafx.h"
#include "HeHoa.h"
#include <iostream>
using namespace std;

HeHoa::HeHoa()
{
}


HeHoa::~HeHoa()
{
}

bool HeHoa::Is_K(NguHanh *h)
{
	if (h->ReturnValueNguHanh() == 1)
		return true;
	return false;
}

bool HeHoa::Is_S(NguHanh *h)
{
	if (h->ReturnValueNguHanh() == 5)
		return true;
	return false;
}

int HeHoa::ReturnValueNguHanh()
{
	return 4;
}

void HeHoa::HienThiNguHanh()
{
	this->setMau(12);
	cout << "He Hoa";
	this->setMau(15);
}
