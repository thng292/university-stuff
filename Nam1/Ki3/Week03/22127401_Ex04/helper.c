#include "helper.h"

int interpolationSearch(FILE* file, int data)
{
    int size;
    fseek(file, 0, SEEK_SET);
    fread(&size, sizeof(int), 1, file);
    int low = 0, high = size - 1, mid;
    int Alow, Ahigh, Amid;
    while (low <= high) {
        fseek(file, (low + 1) * sizeof(int), SEEK_SET);
        fread(&Alow, sizeof(int), 1, file);

        fseek(file, (high + 1) * sizeof(int), SEEK_SET);
        fread(&Ahigh, sizeof(int), 1, file);

        mid = low + ((long long)(data - Alow) * (high - low)) / (Ahigh - Alow);

        fseek(file, (mid + 1) * sizeof(int), SEEK_SET);
        fread(&Amid, sizeof(int), 1, file);

        if (data == Amid) {
            return mid;
        }

        if (data > Amid) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}
