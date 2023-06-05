#include <string.h>

#include <fstream>
#include <iostream>

void CountDistincWords(char** words, int count)
{
    char** distincWords = new char*[1000];
    distincWords[0] = words[0];
    int* distincWordsCount = new int[1000];
    for (int i = 0; i < 1000; i++) {
        distincWordsCount[i] = 1;
    }
    int currentIndex = 0;
    for (int i = 1; i < count; i++) {
        if (strcmp(words[i], distincWords[currentIndex]) == 0) {
            distincWordsCount[currentIndex]++;
        } else {
            currentIndex++;
            distincWords[currentIndex] = words[i];
        }
    }

    std::cout << "Number of distinct words: " << currentIndex + 1 << std::endl;
    std::cout << "Distinct words and their count:" << std::endl;
    for (int i = 0; i <= currentIndex; i++) {
        std::cout << distincWords[i] << ": " << distincWordsCount[i]
                  << std::endl;
    }
    delete[] distincWords;
    delete[] distincWordsCount;
}

void sort(char** word, int size)
{
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (strcmp(word[i], word[j]) > 0) {
                char* temp = word[i];
                word[i] = word[j];
                word[j] = temp;
            }
        }
    }
}

int main()
{
    char* inp = new char[10000];
    inp[0] = '\0';
    char* buf = new char[10000];
    std::ifstream in("inp.txt");
    int count = 0;
    while (!in.fail()) {
        in.getline(buf, 10000);
        strcat(inp, buf);
    }
    delete[] buf;
    in.close();
    // std::cout << inp << std::endl;
    char** words = new char*[1000];
    for (int i = 0; i < 1000; i++) {
        words[i] = new char[1000];
        words[i][0] = '\0';
    }

    const char* delim = " ,.!?;:-";
    char* tok = strtok(inp, delim);
    while (tok != NULL) {
        strcpy(words[count], tok);
        count++;
        tok = strtok(NULL, delim);
    }

    std::cout << "Number of words: " << count << std::endl;

    sort(words, count);

    CountDistincWords(words, count);

    for (int i = 0; i < 1000; i++) {
        delete[] words[i];
    }
    delete[] inp;
    delete[] words;
}