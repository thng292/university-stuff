// Bai1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Bai5/PhanSo.cpp"

int main()
{
	printf("Chuong trinh lam viec voi phan so.\n");
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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
