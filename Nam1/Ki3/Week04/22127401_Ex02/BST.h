typedef struct BinaryTree_Iter BinaryTree_Iter;

typedef struct BinaryTree BinaryTree;

BinaryTree* BinaryTree_Init();

int BinaryTree_Iter_Data(BinaryTree_Iter* self);

void BinaryTree_Iter_Next(BinaryTree_Iter* self);

void BinaryTree_Iter_Prev(BinaryTree_Iter* self);

int BinaryTree_Iter_Equal(BinaryTree_Iter* left, BinaryTree_Iter* right);

BinaryTree_Iter* BinaryTree_Begin(BinaryTree* self);

BinaryTree_Iter* BinaryTree_End(BinaryTree* self);

void BinaryTree_Iter_Destroy(BinaryTree_Iter* self);

void BinaryTree_Insert(BinaryTree* self, int item);

BinaryTree_Iter* BinaryTree_Find(BinaryTree* self, int item);
    
int BinaryTree_SumAllNode(BinaryTree* self, int level);

int BinaryTree_FindMin(BinaryTree* self, int level);

int BinaryTree_FindMax(BinaryTree* self, int level);

// Remove the element and move the iterator to the next pos
void BinaryTree_Remove(BinaryTree_Iter* iter);

void BinaryTree_PrintMinMax(BinaryTree* self);

void BinaryTree_Destroy(BinaryTree* self);
