// Bai9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool isChar(char ch) {
    return ('a' <= ch && ch <= 'z') || ('A' <= ch && ch <= 'Z') || ('0' <= ch && ch <= '9');
}

int main()
{
    printf("Chuong trinh cho biet vi tri cua cac ki tu khong phai so hoac chu.\n");
    char str[100];
    int pos[100];
    int last = 0;
    printf("Nhap chuoi: ");
    gets_s(str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (!isChar(str[i])) {
            pos[last++] = i;
        }
    }
    printf("Cac vi tri khong phai ki so hay ki tu la: \n");
    for (int i = 0; i < last; i++)
    {
        printf("%d ", pos[i] + 1);
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
