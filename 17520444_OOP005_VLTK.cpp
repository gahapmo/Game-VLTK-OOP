// 17520444_OOP005_VLTK.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "GameVLTK.h"

int main()
{
	GameVLTK *VLTK = new GameVLTK;

	cout << "		DANH SACH CAO THU VO LAM GAME VO LAM TRUYEN KY\n";
	cout << "Ten xanh: player\tTen do: quai vat\n";

	VLTK->DangKy();
	VLTK->DanhSachObject();
	cout << ">>> TOP SEVER: ";
	VLTK->SatThuongLonNhat()->HienThiThonTin();

	cout << "\n\n		DANH NHAU";
	VLTK->DauTruong();

	system("pause");
    return 0;
}

