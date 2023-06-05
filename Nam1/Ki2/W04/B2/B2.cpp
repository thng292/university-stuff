#include <iostream>
#include "student.h"

int main() {
    std::cout << "Give me some students:\n";
    Student* students = ReadStudents();
    std::cout << "\nList of students whose scores are less than 5 to an array:\n";
    WriteStudents(GetStudentScoreLessThan5(students));
    std::cout << "List of students in ascending order based on their ID:\n";
    SortStudentByID_ASC(&students);
    WriteStudents(students);
    std::cout << "List of students in descending order based on their name:\n";
    SortStudentByName_DESC(&students);
    WriteStudents(students);
    std::cout << "Top 3 students who have the highest score:\n";
    WriteStudents(GetTopStudent(students, 3));
    freeStudents(students);
    freeArr(students);
}