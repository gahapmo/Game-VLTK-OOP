#pragma once
#include <iostream>
#include "PhaiCaiBang.h"
#include "PhaiConLon.h"
#include "PhaiDuongMon.h"
#include "PhaiNgaMy.h"
#include "PhaiNguDocGiao.h"
#include "PhaiThienNhanGiao.h"
#include "PhaiThienVuongBang.h"
#include "PhaiThieuLam.h"
#include "PhaiThuyYenMon.h"
#include "PhaiVoDang.h"

class Object
{
protected:
	int iCapDo;
	float iDamage;
	NguHanh *pNguHanh;
	std::string strTen;
public:
	Object();
	~Object();
	void GaySatThuong(Object*);
	void HienThiThonTin();
	virtual void HienThiTen();
	float getDamage();
};

