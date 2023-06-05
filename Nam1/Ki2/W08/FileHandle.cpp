#include "FileHandle.h"
#include <iostream>

std::ifstream OpenInFile(char* fileName) {
    std::ifstream inFile(fileName);
    if (inFile.fail()) {
        std::cout << "File not found" << std::endl;
    }
    return inFile;
}

std::ofstream OpenOutFile(char* fileName) {
    std::ofstream outFile(fileName);
    return outFile;
}