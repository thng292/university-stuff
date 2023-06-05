// Bai7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int tongChuSo(int n) {
    int answer = 0;
    while (n != 0) {
        answer += n % 10;
        if (answer > 10) return answer;
        n /= 10;
    }
    return answer;
}

int main()
{
    int n = 0;
    printf("Chuong trinh tim tat ca cac so nguyen duong\n");
    printf("co tong cac chu so bang 10 nho hon n.\n");
    do {
        printf("Nhap so nguyen duong n: ");
        scanf_s("%d", &n);
    } while (n <= 0);
    if (n < 19) {
        printf("Khong co so nao co tong cac chu so bang 10 nho hon %d.\n", n);
        return 0;
    }
    for (int i = 19; i <= n; i++) {
        if (tongChuSo(i)==10) {
            printf("So %d co tong cac chu so bang 10.\n", i);
            i += (10 - i % 10);
        }
    }
    return 0;
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
