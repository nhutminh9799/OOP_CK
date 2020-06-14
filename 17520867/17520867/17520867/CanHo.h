#pragma once
#include <iostream>
#include <string>
using namespace std;
class CanHo
{
protected:
	char DiaChi[30];
	long TienDatCoc;
	long TienHangThang;
	int TinhTrang;
public:
	CanHo();
	~CanHo();
	virtual void Nhap();
	virtual void Xuat();
	virtual int SoPhongTrong();
	virtual long TongTien();
};

