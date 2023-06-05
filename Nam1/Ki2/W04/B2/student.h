#include <iostream>
#include <string.h>
#include "../DynamicArr.h"

struct Student {
    int ID = 0;
    char* Name = 0;
    double Score = 0;
    char* Address = 0;
    inline bool isScoreLessThan5() { return Score < 5; };
};

std::istream& operator>>(std::istream& is, Student& student);

std::ostream& operator<<(std::ostream& os, const Student& student);

Student* GetStudentScoreLessThan5(Student* arr);

void SortStudentByID_ASC(Student** arr);

void SortStudentByName_DESC(Student** arr);

void SortStudentByScore_DESC(Student** arr);

Student* GetTopStudent(Student* arr, int top);

Student* ReadStudents();

void WriteStudents(Student* arr);

void freeStudent(Student* student);

void freeStudents(Student* students);