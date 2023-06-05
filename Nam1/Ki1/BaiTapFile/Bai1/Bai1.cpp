// Bai1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Bai22/Utils.cpp"
#include "../Bai22/File.cpp"

int main()
{
    printf("Chuong trinh ghi cac so nguyen to trong doan M, N nhap tu tap tin \"input.txt\" vao tap tin \"output.txt\".\n"); 
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
	int n = 0, m = 0;
	fscanf_s(inpfile, "%d", &n);
	fscanf_s(inpfile, "%d", &m);
	int res[100];
	arrPrime(res, n, m);
	WriteArr(outfile, res + 1, res[0] - 1);
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
