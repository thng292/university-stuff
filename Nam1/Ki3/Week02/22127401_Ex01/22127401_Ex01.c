#include <stdio.h>
#include <stdlib.h>

#include "Bin2Text.h"
#include "Text2Bin.h"

int main()
{
    Text2Bin("1000n.txt", "1000n.bin");
    Bin2Text("10000n.bin", "10000n.txt");
    Text2Bin("100000nSorted.txt", "100000nSorted.bin");
    return 0;
}
