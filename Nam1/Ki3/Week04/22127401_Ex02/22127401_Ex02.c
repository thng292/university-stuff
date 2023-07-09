#include <stdio.h>

#include "BST.h"

const char* const inFile = "data_bst.bin";

void Print(BinaryTree* tree)
{
    BinaryTree_Iter* begin = BinaryTree_Begin(tree);
    BinaryTree_Iter* end = BinaryTree_End(tree);
    while (!BinaryTree_Iter_Equal(begin, end)) {
        printf("%d, ", BinaryTree_Iter_Data(begin));
        BinaryTree_Iter_Next(begin);
    }
    BinaryTree_Iter_Destroy(begin);
    BinaryTree_Iter_Destroy(end);
    printf("\n");
    fflush(stdout);
}

int main()
{
    BinaryTree* tree = BinaryTree_Init();
    FILE* file = fopen(inFile, "rb");
    int buffer;
    while (1) {
        fread(&buffer, sizeof(buffer), 1, file);
        if (!feof(file)) {
            BinaryTree_Insert(tree, buffer);
        } else {
            break;
        }
    }
    // printf("Original:\n");
    // Print(tree);
    printf("Sum of all node at level 5: %d\n", BinaryTree_SumAllNode(tree, 5));
    printf("Min of level 5: %d\n", BinaryTree_FindMin(tree, 5));
    printf("Max of level 5: %d\n", BinaryTree_FindMax(tree, 5));

    BinaryTree_Iter* begin = BinaryTree_Begin(tree);
    BinaryTree_Iter* end = BinaryTree_End(tree);
    while (!BinaryTree_Iter_Equal(begin, end)) {
        if (BinaryTree_Iter_Data(begin) % 2 != 0) {
            BinaryTree_Remove(begin);
        } else {
            BinaryTree_Iter_Next(begin);
        }
    }
    BinaryTree_Iter_Destroy(begin);
    BinaryTree_Iter_Destroy(end);

    printf("After remove all odd elements:\n");
    Print(tree);

    printf("The tree in Min-Max format:\n");
    begin = BinaryTree_Begin(tree);
    end = BinaryTree_End(tree);
    BinaryTree_Iter_Prev(end);
    
    while (BinaryTree_Iter_Data(begin) < BinaryTree_Iter_Data(end)) {
        printf("%d, ", BinaryTree_Iter_Data(begin));
        printf("%d, ", BinaryTree_Iter_Data(end));
        BinaryTree_Iter_Next(begin);
        BinaryTree_Iter_Prev(end);
    }
    if (BinaryTree_Iter_Equal(begin, end)) {
        printf("%d, ", BinaryTree_Iter_Data(end));
    }
    printf("\n");
    BinaryTree_Iter_Destroy(begin);
    BinaryTree_Iter_Destroy(end);

    BinaryTree_Destroy(tree);
    return 0;
}
