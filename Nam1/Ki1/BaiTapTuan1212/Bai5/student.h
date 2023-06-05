#pragma once
struct student {
	char name[30] = "";
	float toan = 0, li = 0, hoa = 0;
};

student ReadStudent();

void Writestudent(student stu);

void WriteStudent(student& stu);

void ReadArrStudent(student arr[], int &length, int &max);

void WriteArrStudent(student arr[], int length);

void SortByDiemToan(student arr[], int length);

float Avg(student& stu);

void TopThree(student arr[], int length);