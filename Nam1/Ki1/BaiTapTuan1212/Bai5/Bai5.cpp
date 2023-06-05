// Bai5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "PhanSo.h"
#include "Diem2D.h"
#include "student.h"

int main()
{
	printf("1. Chuong trinh lam viec voi phan so.\n");
	printf("2. Chuong trinh xu li them voi phan so.\n");
	printf("3. Chuong trinh lam viec voi diem tren mat phang Oxy.\n");
	printf("4. Chuong trinh lam viec voi hoc sinh.\n");
	int option = 0;
	do {
		printf("Nhap lua chon cua ban: ");
		scanf_s("%d", &option);
	} while (option <= 0 || option >=5);
	fflush(stdin);
	switch (option)
	{
	case 1 :
	{
		PhanSo inp1 = NReadPhanSo();
		PhanSo inp2 = NReadPhanSo();
		printf("Tong 2 phan so la: ");
		PhanSo tmp = Tong(inp1, inp2);
		WritePhanSo(tmp);
		printf("Hieu 2 phan so la: ");
		tmp = Hieu(inp1, inp2);
		WritePhanSo(tmp);
		printf("Tich 2 phan so la: ");
		tmp = Tich(inp1, inp2);
		WritePhanSo(tmp);
		printf("Thuong 2 phan so la: ");
		tmp = Thuong(inp1, inp2);
		WritePhanSo(tmp);
		printf("Phan so rut gon cua 2 phan so la: \n");
		RutGon(inp1);
		RutGon(inp2);
		WritePhanSo(inp1);
		WritePhanSo(inp2);
		printf("So sanh 2 phan so: %d", SoSanhTamTri(inp1, inp2));
	}
	case 2:
	{
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
	case 3:
	{
		Diem2D A = ReadPoint();
		Diem2D B = ReadPoint();
		Diem2D C = ReadPoint();
		Diem2D D = ReadPoint();
		TamGiac ABC;
		ABC.a = A;
		ABC.b = B;
		ABC.c = C;
		printf("Khoang cach 2 diem A, B la: %lf\n", Distance(A, B));
		printf("Chu vi tam giac A, B, C la: %lf\n", ChuViTamGiac(ABC));
		printf("Dien tich tam giac A, B, C la: %lf\n", DienTichTamGiac(ABC));
		if (CheckBenTrong(ABC, D)) {
			printf("Diem D nam trong tam giac.\n");
		}
		else {
			printf("Diem D nam ngoai tam giac.\n");
		}
	}
	case 4:
	{
		student hocsinh[300];
		int no_hocsinh = 0;
		int max = 300;
		ReadArrStudent(hocsinh, no_hocsinh, max);
		SortByDiemToan(hocsinh, no_hocsinh);
		printf("Day da sap xep la:\n");
		WriteArrStudent(hocsinh, no_hocsinh);
		TopThree(hocsinh, no_hocsinh);
	}
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
