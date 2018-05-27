#include "stdafx.h"
#include "GameVLTK.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

GameVLTK::GameVLTK()
{
}


GameVLTK::~GameVLTK()
{
}

void GameVLTK::DangKy()
{
	ifstream InputFile("Input.txt");

	InputFile >> n;
	pObject = new Object*[n];
	for (int i = 0; i < n; i++)
	{
		int type, lv, Phai;
		string ten;
		InputFile >> type;
		InputFile >> lv;
		InputFile >> Phai;
		InputFile.get();
		getline(InputFile, ten);

		if (type == 1)
		{
			pObject[i] = new Player(ten, lv, this->KhoiTao(1, Phai));
		}
		else if (type == 2)
		{
			pObject[i] = new QuaiThuong(ten, lv, this->KhoiTao(2, Phai));
		}
		else
		{
			pObject[i] = new QuaiDauLinh(ten, lv, this->KhoiTao(3, Phai));
		}
	}
	InputFile.close();
}



void GameVLTK::DanhSachObject()
{
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << "\t";
		this->pObject[i]->HienThiThonTin();
		cout << endl;
	}
}

void GameVLTK::DauTruong()
{
	char conf;
	do {
		cout << "\nChon 2 cao thu de danh nhau: ";
		int n1, n2;
		cout << "\nSo thu tu cao thu thu 1: ";
		cin >> n1;
		cout << "So thu tu cao thu thu 2: ";
		cin >> n2;

		if (n1 == n2 || n1 < 0 || n2 < 0 || n1 > n || n2 > n)
		{
			cout << "\nSo lieu khong hop le !!!\n";
		}

		this->pObject[n1 - 1]->GaySatThuong(this->pObject[n2 - 1]);
		cout << "\nBan co muon tiep tuc (y/n)?";
		cin >> conf;
	} while (conf == 'y');
}

Object * GameVLTK::SatThuongLonNhat()
{
	int p = 0;
	for (int i = 0; i < n; i++)
	{
		if (this->pObject[p]->getDamage() < this->pObject[i]->getDamage())
			p = i;
	}
	return this->pObject[p];
}

NguHanh * GameVLTK::KhoiTao(int type, int n)
{
	NguHanh *p;
	if (type != 1)
	{
		switch (n)
		{
		case 1:
			p = new HeKim;
			break;
		case 2:
			p = new HeMoc;
			break;
		case 3:
			p = new HeThuy;
			break;
		case 4:
			p = new HeHoa;
			break;
		default:
			p = new HeTho;
			break;
		}
	}
	else
	{
		switch (n)
		{
		case 1:
			p = new PhaiThieuLam;
			break;
		case 2:
			p = new PhaiThienVuongBang;
			break;
		case 3:
			p = new PhaiNguDocGiao;
			break;
		case 4:
			p = new PhaiDuongMon;
			break;
		case 5:
			p = new PhaiNgaMy;
			break;
		case 6:
			p = new PhaiThuyYenMon;
			break;
		case 7:
			p = new PhaiCaiBang;
			break;
		case 8:
			p = new PhaiThienNhanGiao;
			break;
		case 9:
			p = new PhaiConLon;
			break;
		default:
			p = new PhaiVoDang;
			break;
		}
	}
	return p;
}
