// Bai22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Utils.h"
#include "File.h"
#include "Circle.h"
#include "PhanSo.h"
#include "Point2D.h"

// May bai viet ham em tong hop chung vo day luon

int main() {
	printf("Cac lua chon duoi day se doc tu tap tin \"input.txt\" va ghi vao tap tin \"output.txt\"\n");
	printf("    1. Chuong trinh ghi cac so nguyen to trong doan M, N\n");
	printf("    2. Test doc ma tran\n");
	printf("    3. Test doc va ghi ma tran tu\n");
	printf(" 4|13. Test doc va ghi phan so, dau vao dang: x/y\n");
	printf(" 5|14. Test doc va ghi mang phan so\n");
	printf(" 6|16. Test doc va ghi diem 2d, dau vao dang: x,y\n");
	printf(" 7|17. Test doc va ghi mang diem 2d\n");
	printf(" 8|19. Test doc va ghi duong tron, dau vao dang x,y,R\n");
	printf(" 9|20. Test doc va ghi mang duong tron\n");
	printf("10|15. Test doc va ghi ma tran phan so\n");
	printf("11|18. Test doc va ghi ma tran diem 2d\n");
	printf("12|21. Test doc va ghi ma tran duong tron\n");


	int option = 0;
	do {
		printf("Nhap lua chon: ");
		scanf_s("%d", &option);
	} while (option >= 22 || option <= 0);
	FILE* inpfile;
	fopen_s(&inpfile, "input.txt", "r");
	if (inpfile == 0) {
		printf("Can't open input file!");
		return 1;
	}
	FILE* outfile;
	fopen_s(&outfile, "output.txt", "w");
	if (outfile == 0) {
		printf("Can't open output file!");
		return 1;
	}
	switch (option)
	{
		case 1:
		{
			int n = 0, m = 0;
			fscanf_s(inpfile, "%d", &n);
			fscanf_s(inpfile, "%d", &m);
			printf("Read from \"input.txt\"\n");
			int res[100];
			arrPrime(res, n, m);
			WriteArr(outfile, res + 1, res[0] - 1);
			printf("Wrote to \"output.txt\"\n");
		}
		break;
		case 2:
		{
			int row, col;
			int inp[100][100];
			ReadMatrix(inpfile, inp, row, col);
			printf("Read from \"input.txt\"\n");
			printf("Matran vua doc la:\n");
			for (int i = 0; i < row; i++)
			{
				for (int j = 0; j < col; j++)
				{
					printf("%d ", inp[i][j]);
				}
				printf("\n");
			}
		}
		break;
		case 3:
		{
			int row, col;
			int inp[100][100];
			ReadMatrix(inpfile, inp, row, col);
			printf("Read from \"input.txt\"\n");
			WriteMatrix(outfile, inp, row, col);
			printf("Wrote to \"output.txt\"\n");
		}
		break;
		case 4:
		case 13:
		{
			PhanSo tmp = ReadPhanSo(inpfile);
			printf("Read from \"input.txt\"\n");
			WritePhanSo(outfile, tmp);
			printf("Wrote to \"output.txt\"\n");
		}
		break;
		case 5:
		case 14:
		{
			PhanSo inp[100];
			int length;
			ReadArrPhanSo(inpfile, inp, length);
			printf("Read from \"input.txt\"\n");
			WriteArrPhanSo(outfile, inp, length);
			printf("Wrote to \"output.txt\"\n");
		}
		break;
		case 8:
		case 19:
		{
			Circle tmp = ReadCircle(inpfile);
			printf("Read from \"input.txt\"\n");
			WriteCircle(outfile, tmp);
			printf("Wrote to \"output.txt\"\n");
		}
		break;
		case 6:
		case 16:
		{
			Point2D a = ReadPoint2D(inpfile);
			printf("Read from \"input.txt\"\n");
			WritePoint2D(outfile, a);
			printf("Wrote to \"output.txt\"\n");
		}
		break;
		case 7:
		case 17:
		{
			Point2D inp[100];
			int length;
			ReadArrPoint2D(inpfile, inp, length);
			printf("Read from \"input.txt\"\n");
			WriteArrPoint2D(outfile, inp, length);
			printf("Wrote to \"output.txt\"\n");
		}
		break;
		case 9:
		case 20:
		{
			Circle inp[100];
			int length;
			ReadArrCircle(inpfile, inp, length);
			printf("Read from \"input.txt\"\n");
			WriteArrCircle(outfile, inp, length);
			printf("Wrote to \"output.txt\"\n");
		}
		break;
		case 10:
		case 15:
		{
			PhanSo inp[100][100];
			int row, col;
			ReadMatrixPhanSo(inpfile, inp, row, col);
			printf("Read from \"input.txt\"\n");
			WriteMatrixPhanSo(outfile, inp, row, col);
			printf("Wrote to \"output.txt\"\n");
		}
		break;
		case 11:
		case 18:
		{
			Point2D inp[100][100];
			int row, col;
			ReadMatrixPoint2D(inpfile, inp, row, col);
			printf("Read from \"input.txt\"\n");
			WriteMatrixPoint2D(outfile, inp, row, col);
			printf("Wrote to \"output.txt\"\n");
		}
		break;
		case 12:
		case 21:
		{
			Circle inp[100][100];
			int row, col;
			ReadMatrixCircle(inpfile, inp, row, col);
			printf("Read from \"input.txt\"\n");
			WriteMatrixCircle(outfile, inp, row, col);
			printf("Wrote to \"output.txt\"\n");
		}
	}
	fclose(inpfile);
	fclose(outfile);
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
