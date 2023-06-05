#include "student.h"
#include <stdio.h>
#include <algorithm>

student ReadStudent() {
	student res;
	printf("Nhap hoc sinh\n");
	printf("Nhap ten hoc sinh: ");
	gets_s(res.name);
	do {
		printf("Nhap diem toan: ");
		scanf_s("%f", &res.toan);
	} while (res.toan <= 0 || res.toan > 10);
	do {
		printf("Nhap diem li: ");
		scanf_s("%f", &res.li);
	} while (res.li <= 0 && res.li > 10);
	do {
		printf("Nhap diem hoa: ");
		scanf_s("%f", &res.hoa);
	} while (res.hoa <= 0, res.hoa > 10);
	return res;
}

void Writestudent(student stu) {
	printf("Hoc sinh %s. Co diem toan: %f, li: %f, hoa: %f.\n", stu.name, stu.toan, stu.li, stu.hoa);
}

void WriteStudent(student& stu) {
	printf("Hoc sinh %s. Co diem toan: %f, li: %f, hoa: %f.\n", stu.name, stu.toan, stu.li, stu.hoa);
}

void ReadArrStudent(student arr[], int& length, int& max) {
	do {
		printf("Nhap so hoc sinh: ");
		scanf_s("%d", &length);
	} while (length <= 0 || length >= max);
	char tmp[10];
	for (int i = 0; i < length; i++)
	{
		gets_s(tmp);
		arr[i] = ReadStudent();
	}
}

void WriteArrStudent(student arr[], int length) {
	for (int i = 0; i < length; i++)
	{
		WriteStudent(arr[i]);
	}
}

void SortByDiemToan(student arr[], int length) {
	std::sort(arr, arr + length, [](student a, student b) {
		return a.toan < b.toan;
		});
}

float Avg(student& stu) {
	return (stu.toan + stu.hoa + stu.li) / 3;
}

void TopThree(student arr[], int length) {
	printf("Top 3 theo diem trung binh la: \n");
	student res[3];
	int tmp[3] = { -1, -1, -1 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < length; j++)
		{
			if (Avg(res[i]) > Avg(arr[j]) || j == tmp[0] || j == tmp[1] || j == tmp[2]) {
				continue;
			}
			res[i] = arr[j];
			tmp[i] = j;
		}
	}
	WriteArrStudent(res, 3);
}
