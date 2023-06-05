#include "DynamicArr.h"

Arr1D metaArr(Arr1D arr) {
    return (char*)arr - metaSize;
}

Arr1D dataArr(Arr1D arr) {
    return (char*)arr + metaSize;
}

void setItemArr(Arr1D arr, size_t pos, void* item) {
    memcpy((char*)arr + pos * sizeItemArr(arr), item, sizeItemArr(arr));
}

inline size_t min(size_t a, size_t b) {
    return a > b ? b : a;
}

Arr1D resizeArr(Arr1D oldArr, size_t newSize) {
    Arr1D arr = new char[newSize * sizeItemArr(oldArr) + metaSize];
    if (arr == nullptr) {
        return oldArr;
    }
    *(size_t*)arr = newSize;
    *((size_t*)arr + 1) = sizeItemArr(oldArr);
    memcpy(dataArr(arr), oldArr, min(sizeArr(oldArr), newSize) * sizeItemArr(oldArr));
    freeArr(oldArr);
    return dataArr(arr);
}

Arr1D initArr(size_t size, size_t itemSize) {
    Arr1D arr = new char[metaSize];
    *(size_t*)arr = 0;
    *((size_t*)arr + 1) = itemSize;
    return resizeArr(dataArr(arr), size);
}

Arr1D initArr(size_t itemSize) {
    Arr1D arr = new char[metaSize];
    *(size_t*)arr = 0;
    *((size_t*)arr + 1) = itemSize;
    return dataArr(arr);
}

void pushArr(Arr1D* arr, void* item) {
    *arr = resizeArr(*arr, sizeArr(*arr) + 1);
    setItemArr(*arr, sizeArr(*arr) - 1, item);
}

size_t sizeArr(Arr1D arr) {
    return *(size_t*)metaArr(arr);
}

size_t sizeItemArr(Arr1D arr) {
    return *((size_t*)metaArr(arr) + 1);
}

void freeArr(Arr1D arr) {
    delete[] metaArr(arr);
}

Arr1D cpyArr(Arr1D arr) {
    Arr1D tmp = new char[metaSize + sizeArr(arr) * sizeItemArr(arr)];
    memcpy(tmp, metaArr(arr), metaSize + sizeArr(arr) * sizeItemArr(arr));
    return dataArr(tmp);
}
