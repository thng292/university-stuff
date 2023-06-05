// Bai3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>

void swap(char& a, char& b) {
    char tmp = a;
    a = b;
    b = tmp;
}

int main() {
    printf("Chuong trinh nhap vao 1 chuoi va in ra man hinh chuoi dao.\n");
    printf_s("Nhap chuoi: ");
    char str[100];
    gets_s(str);
    str[99] = '\0';
    int n = strlen(str) - 1;
    int i = 0;
    while (i < n) {
        swap(str[i++], str[n--]);
    }
    printf_s("Chuoi da nhap la: %s", str);
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
