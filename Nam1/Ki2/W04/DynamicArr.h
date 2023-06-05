#include <memory.h>

typedef void* Arr1D;

static const size_t metaSize = 2 * sizeof(size_t);

static Arr1D metaArr(Arr1D arr);

static Arr1D dataArr(Arr1D arr);

void setItemArr(Arr1D arr, size_t pos, void* item);

size_t sizeArr(Arr1D arr);

size_t sizeItemArr(Arr1D arr);

Arr1D resizeArr(Arr1D oldArr, size_t newSize);

Arr1D initArr(size_t size, size_t itemSize);

Arr1D initArr(size_t itemSize);

void pushArr(Arr1D* arr, void* item);

void freeArr(Arr1D arr);

Arr1D cpyArr(Arr1D arr);