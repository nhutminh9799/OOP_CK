#include "ChungCu.h"
ChungCu::ChungCu()
{
}
ChungCu::~ChungCu()
{
}
void ChungCu::Nhap()
{
	CanHo::Nhap();
	cout << " nhap vi tri tang cua chung cu: ";
	cin >> STT;
	cout << endl;
}
void ChungCu::Xuat()
{
	CanHo::Xuat();
	cout << " Can ho chung cu o tang: " << STT << endl;
	cout << endl;
}

