// Bai6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int min(int a, int b) {
    if (a > b) {
        return b;
    }
    else {
        return a;
    }
}

bool compp(char* a, char* b) {
    int N = min(strlen(a), strlen(b));
    for (int i = 0; i < N; i++)
    {
        if (a[i] != b[i]) {
            return 0;
        }
    }
    return 1;
}

int main()
{
    printf("Chuong trinh tim vi tri xuat hien cua chuoi con trong chuoi lon.\n");
    printf("Nhap chuoi lon: ");
    char str[100];
    gets_s(str);
    printf("Nhap chuoi con: ");
    char subStr[100];
    gets_s(subStr);
    printf("Cac vi tri la: \n");
    for (int i = 0; i < strlen(str) - strlen(subStr) + 1; i++)
    {
        if (compp(str + i, subStr)) {
            printf("%d\n", i+1);
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
