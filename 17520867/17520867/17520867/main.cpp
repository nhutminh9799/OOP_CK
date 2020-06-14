#include <iostream>
using namespace std;
#include "CanHo.h"
#include"CanHoThuong.h"
#include"ChungCu.h"
int main()
{
	CanHo *DS[100];
	int m;
	int menu;
	cout << " Nhap so luong can ho can nhap thong tin";
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cout << " moi ban chon so:" << endl;
		cout << "1. Can ho thuong " << endl;
		cout << " 2. Can ho chung cu: " << endl;
		cin >> menu;
		switch (menu)
		{
		case 1:
		{

			DS[i] = new CanHoThuong();
			DS[i]->Nhap();
			break;
		}
		case 2:
		{
			DS[i] = new ChungCu();
			DS[i]->Nhap();
			break;
		}
		}
	}
	for (int i = 0; i < m; i++)
	{
		DS[i]->Xuat();
	}
	/* cau d.Tinh Tong Tien*/
	long Tong=0;
	cout << " tong tien hang thang la";
	for (int i = 0; i < m; i++)
	{
		Tong = Tong+ DS[i]->TongTien();
	}
	cout << Tong;
	cout << endl;
	/*cau c. dem so*/
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		if (DS[i]->SoPhongTrong() == 1)
		{
			dem++;
		}
	}
	cout << " so phong trong la:" << dem << endl;
	system("pause");
	return 0;
}