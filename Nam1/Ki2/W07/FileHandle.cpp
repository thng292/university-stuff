#include "FileHandle.h"

std::ifstream OpenInFile(char* fileName) {
    std::ifstream inFile(fileName);
    return inFile;
}

std::ofstream OpenOutFile(char* fileName) {
    std::ofstream outFile(fileName);
    return outFile;
}