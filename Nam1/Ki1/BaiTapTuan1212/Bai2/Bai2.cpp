// Bai2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Bai5/PhanSo.cpp"

int main()
{
	printf("Chuong trinh xu li them voi phan so.\n");
	PhanSo inp[100];
	int n = 0;
	ReadArrPhanSo(inp, n);
	printf("Tong cua day la: ");
	PhanSo tmp = TinhTong(inp, n);
	WritePhanSo(tmp);
	for (int i = 0; i < n; i++)
	{
		RutGon(inp[i]);
	}
	printf("Day da rut gon la: \n");
	WriteArrPhanSo(inp, n);
	SapXep(inp, n);
	printf("Day da sap xep la: \n");
	WriteArrPhanSo(inp, n);
	printf("Nhap phan so can tim: \n");
	tmp = NReadPhanSo();
	if (PhanSoFind(inp, n, tmp)) {
		printf("Phan so co ton tai trong mang.\n");
	}
	else {
		printf("Phan so khong ton tai trong mang.\n");
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
