// Bai5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    printf("Chuong trinh nhap vao 1 chuoi va viet ra cac chu cai dau cua chuoi.\n");
    char str[100];
    printf_s("Nhap chuoi: ");
    gets_s(str);
    str[99] = '\0';
    printf_s("Chuoi da nhap la: \n");
    char* tmp = NULL;
    char* part = strtok_s(str, " ", &tmp);
    while (part != NULL)
    {
        if (part[0] >= 'a' && part[0] <= 'z') {
            part[0] -= ('a' - 'A');
        }
        printf_s("%s ", part);
        part = strtok_s(NULL, " ", &tmp);
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
