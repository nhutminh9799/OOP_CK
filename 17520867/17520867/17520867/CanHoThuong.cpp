#include "CanHoThuong.h"
CanHoThuong::CanHoThuong()
{
}
CanHoThuong::~CanHoThuong()
{
}
void CanHoThuong::Nhap()
{
	CanHo::Nhap();
	cout << " nhap so tang cua can ho thuong ";
	cin >> SoTang;
	cout << endl;
}
void CanHoThuong::Xuat()
{
	CanHo::Xuat();
	cout << " Can ho co " << SoTang << endl;
}