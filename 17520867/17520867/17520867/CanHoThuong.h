#pragma once
#include<iostream>
using namespace std;
#include "CanHo.h"
class CanHoThuong:public CanHo
{
private:
	int SoTang;
public:
	CanHoThuong();
	~CanHoThuong();
	void Nhap();
	void Xuat();
};

