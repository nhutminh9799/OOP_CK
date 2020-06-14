#include "CanHo.h"
CanHo::CanHo()
{
}
CanHo::~CanHo()
{
}
void CanHo::Nhap()
{
	cout << " Nhap dia chi can ho";
	fflush(stdin);
	cin.ignore();
	gets_s(DiaChi);
	cout << endl;
	cout << " tien dat coc";
	cin >> TienDatCoc;
	cout << endl;
	cout << " tien hang thang";
	cin >> TienHangThang;
	cout << endl;
	cout << " Tinh trang can ho ";
	cout << "1. con trong , 2. Da Thue";
	cin >> TinhTrang;
	cout << endl;
}
void CanHo::Xuat()
{
	cout << "Dia chi can ho" << DiaChi << endl;
	cout << " tien dat coc" << TienDatCoc << endl;
	cout << " tien hang thang " << TienHangThang << endl;
	if (TinhTrang == 1)
	{
		cout << " Can ho con trong";
	}
	else
	{
		cout << " Can ho da co nguoi thue !";
	}
}
int CanHo::SoPhongTrong()
{
	if (TinhTrang == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
long CanHo::TongTien()
{
	return TienHangThang;
}