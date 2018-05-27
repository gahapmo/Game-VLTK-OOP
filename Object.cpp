#include "stdafx.h"
#include "Object.h"
#include <string>
#include <time.h>

Object::Object()
{
}


Object::~Object()
{
}

void Object::GaySatThuong(Object *obj)
{
	int thisDamage = this->iDamage, objdamage = obj->iDamage;
	if (this->pNguHanh->Is_S(obj->pNguHanh))
		thisDamage *= 1.1;
	else if (obj->pNguHanh->Is_S(this->pNguHanh))
		objdamage *= 1.1;
	else if (this->pNguHanh->Is_K(obj->pNguHanh))
	{
		thisDamage *= 1.2;
		objdamage *= 0.8;
	}
	else if (obj->pNguHanh->Is_K(this->pNguHanh))
	{
		thisDamage *= 0.8;
		objdamage *= 1.2;
	}

	this->HienThiThonTin();
	cout << " gay " << this->iDamage << "(" << (thisDamage - this->iDamage >= 0 ? "+" : "") << thisDamage - this->iDamage << ")" << " sat thuong len ";
	obj->HienThiThonTin();
	cout << endl;
	obj->HienThiThonTin();
	cout << " gay " << obj->iDamage << "(" << (objdamage - obj->iDamage >= 0 ? "+" : "") << objdamage - obj->iDamage << ")" << " sat thuong len ";
	this->HienThiThonTin();
	cout << endl;
}

void Object::HienThiThonTin()
{
	cout << "Lv." << this->iCapDo << " ";
	this->HienThiTen();
	cout << " (";
	this->pNguHanh->HienThiNguHanh();
	cout << ")";
}

void Object::HienThiTen()
{
}

float Object::getDamage()
{
	return this->iDamage;
}
