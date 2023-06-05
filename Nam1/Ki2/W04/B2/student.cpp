#include "student.h"

static char* getLine() {
    char* tmp = new char[100];
    std::cin.getline(tmp, 100);
    std::cin.getline(tmp, 100);
    return tmp;
}

std::istream& operator>>(std::istream& is, Student& student) {
    std::cout << "Nhap ID: ";
    std::cin >> student.ID;
    std::cout << "Nhap Ten: ";
    student.Name = getLine();
    std::cout << "Nhap diem: ";
    std::cin >> student.Score;
    std::cout << "Nhap dia chi: ";
    student.Address = getLine();
    return is;
}

std::ostream& operator<<(std::ostream& os, const Student& student) {
    std::cout << "ID: " << student.ID << '\n';
    std::cout << "Name: " << student.Name << '\n';
    std::cout << "Score: " << student.Score << '\n';
    std::cout << "Address: " << student.Address << '\n';
    return os;
}

Student* GetStudentScoreLessThan5(Student* arr) {
    Arr1D tmp = initArr(sizeof(Student));
    size_t n = sizeArr(arr);
    for (size_t i = 0; i < n; i++) {
        if (arr[i].isScoreLessThan5()) {
            pushArr(&tmp, &arr[i]);
        }
    }
    return (Student*)tmp;
}

template<typename T> inline void swap(T& a, T& b) {
    T tmp = a;
    a = b;
    b = tmp;
}

void SortStudentByID_ASC(Student** arr) {
    size_t n = sizeArr(*arr);
    for (size_t i = 0; i < n; i++) {
        for (size_t j = i + 1; j < n; j++) {
            if ((*arr)[i].ID > (*arr)[j].ID) {
                swap((*arr)[i], (*arr)[j]);
            }
        }
    }
}

void SortStudentByName_DESC(Student** arr) {
    size_t n = sizeArr(*arr);
    for (size_t i = 0; i < n; i++) {
        for (size_t j = i + 1; j < n; j++) {
            if (strcmp((*arr)[i].Name, (*arr)[j].Name) < 0) {
                swap((*arr)[i], (*arr)[j]);
            }
        }
    }
}

void SortStudentByScore_DESC(Student** arr) {
    size_t n = sizeArr(*arr);
    for (size_t i = 0; i < n; i++) {
        for (size_t j = i + 1; j < n; j++) {
            if ((*arr)[i].Score < (*arr)[j].Score) {
                swap((*arr)[i], (*arr)[j]);
            }
        }
    }
}

Student* GetTopStudent(Student* arr, int top) {
    Arr1D tmp = cpyArr(arr);
    SortStudentByScore_DESC((Student**)&tmp);
    tmp = resizeArr(tmp, top);
    return (Student*)tmp;
}

Student* ReadStudents() {
    Arr1D students = initArr(sizeof(Student));
    Student tmp;
    std::cout << "Input: \n";
    while (std::cin >> tmp) {
        std::cout << '\n';
        pushArr(&students, &tmp);
    }
    return (Student*)students;
}

void WriteStudents(Student* arr) {
    size_t n = sizeArr(arr);
    for (size_t i = 0; i < n; i++) {
        std::cout << arr[i] << '\n';
    }
}

void freeStudent(Student* student) {
    delete[] student->Address;
    delete[] student->Name;
}

void freeStudents(Student* students) {
    int n = sizeArr(students);
    for (size_t i = 0; i < n;i++) {
        freeStudent(students + i);
    }
}
