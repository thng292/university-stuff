#include "GetArrMode.h"
#define MAX 1'000'000

int GetArrMode(int* arr, int n) {
    int* freq = new int[MAX];
    memset(freq, 0, MAX * sizeof(int));
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    int maxFreq = 1, maxFreqId = -1;
    for (int i = 0; i < MAX; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxFreqId = i;
        }
    }
    if (maxFreq == 1) {
        return -1;
    }
    return maxFreqId;
}