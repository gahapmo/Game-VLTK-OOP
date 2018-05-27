#include "stdafx.h"
#include "NguHanh.h"
#include <Windows.h>

NguHanh::NguHanh()
{
}


NguHanh::~NguHanh()
{
}

bool NguHanh::Is_K(NguHanh *)
{
	return false;
}

bool NguHanh::Is_S(NguHanh *)
{
	return false;
}

int NguHanh::ReturnValueNguHanh()
{
	return 0;
}

void NguHanh::HienThiNguHanh()
{
}

void NguHanh::setMau(int k)
{
	HANDLE hConsoleColor;
	hConsoleColor = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleColor, k);
}
