#pragma once
#include "Object.h"
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
#include "Player.h"
#include "QuaiDauLinh.h"
#include "QuaiThuong.h"
class GameVLTK
{
private:
	Object **pObject;
	int n;
public:
	GameVLTK();
	~GameVLTK();
	void DangKy();
	void DanhSachObject();
	void DauTruong();
	Object *SatThuongLonNhat();
	NguHanh *KhoiTao(int, int);
};

