#include "BST.h"

#include <inttypes.h>
#include <stdlib.h>

typedef struct Node {
    struct Node* parent;
    struct Node* left;
    struct Node* right;
    int data;
} Node;

typedef struct BinaryTree_Iter {
    Node* node;
    BinaryTree* tree;
} BinaryTree_Iter;

typedef struct BinaryTree {
    Node* root;
} BinaryTree;

BinaryTree* BinaryTree_Init()
{
    BinaryTree* res = malloc(sizeof(BinaryTree));
    res->root = NULL;
    return res;
}

int BinaryTree_Iter_Data(BinaryTree_Iter* self) { return self->node->data; }

Node* AllLeft(Node* self)
{
    while (self->left != NULL) {
        self = self->left;
    }
    return self;
}

Node* AllRight(Node* self)
{
    while (self->right != NULL) {
        self = self->right;
    }
    return self;
}

BinaryTree_Iter* Iter_New(Node* node, BinaryTree* tree)
{
    BinaryTree_Iter* res = malloc(sizeof(BinaryTree_Iter));
    res->node = node;
    res->tree = tree;
    return res;
}

int BinaryTree_Iter_Equal(BinaryTree_Iter* left, BinaryTree_Iter* right)
{
    return left->node == right->node && left->tree == right->tree;
}

BinaryTree_Iter* BinaryTree_Begin(BinaryTree* self)
{
    Node* node = NULL;
    if (self->root != NULL) {
        node = AllLeft(self->root);
    }
    return Iter_New(node, self);
}

BinaryTree_Iter* BinaryTree_End(BinaryTree* self)
{
    return Iter_New(NULL, self);
}

int IsLeftChild(Node* self)
{
    return self->parent != NULL && self == self->parent->left;
}

int IsLeaf(Node* self) { return self->left == NULL && self->right == NULL; }

void BinaryTree_Iter_Next(BinaryTree_Iter* self)
{
    if (self->node->parent == NULL && IsLeaf(self->node)) {
        self->node = NULL;
        return;
    }
    if (self->node->right != NULL) {
        self->node = AllLeft(self->node->right);
        return;
    }
    Node* currentNode = self->node;
    if (currentNode->parent != NULL) {
        if (IsLeftChild(currentNode)) {
            self->node = currentNode->parent;
            return;
        }
        // Go to nearest parent that is left child;
        currentNode = currentNode->parent;
        while (currentNode != NULL && !IsLeftChild(currentNode)) {
            currentNode = currentNode->parent;
        }
        self->node = currentNode == NULL ? currentNode : currentNode->parent;
    }
}

void BinaryTree_Iter_Prev(BinaryTree_Iter* self)
{
    if (self->node == NULL) {
        self->node = AllRight(self->tree->root);
        return;
    }
    if (self->node->left != NULL) {
        self->node = AllRight(self->node->left);
        return;
    }
    Node* currentNode = self->node;
    if (currentNode->parent != NULL) {
        if (!IsLeftChild(currentNode)) {
            self->node = currentNode->parent;
            return;
        }
        // Go to nearest parent that is right child;
        currentNode = currentNode->parent;
        while (currentNode != NULL && IsLeftChild(currentNode)) {
            currentNode = currentNode->parent;
        }
        self->node = currentNode->parent;
    }
}

void BinaryTree_Iter_Destroy(BinaryTree_Iter* self) { free(self); }

Node* FindSpot(Node* root, int item)
{
    int data;
    while (1) {
        data = root->data;
        if (data == item) {
            return root;
        }
        if (data < item) {
            if (root->right != NULL) {
                root = root->right;
            } else {
                return root;
            }
        } else {
            if (root->left != NULL) {
                root = root->left;
            } else {
                return root;
            }
        }
    }
    return root;
}

BinaryTree_Iter* BinaryTree_Find(BinaryTree* self, int item)
{
    Node* res = FindSpot(self->root, item);
    if (res->data == item) {
        return Iter_New(res, self);
    }
    return Iter_New(NULL, self);
}

Node* CreateNode(int data, Node* parent)
{
    Node* res = malloc(sizeof(Node));
    res->parent = parent;
    res->left = NULL;
    res->right = NULL;
    res->data = data;
    return res;
}

void BinaryTree_Insert(BinaryTree* self, int item)
{
    if (self->root == NULL) {
        self->root = CreateNode(item, NULL);
    } else {
        Node* tmp = FindSpot(self->root, item);
        int tmpData = tmp->data;
        if (tmpData == item) {
            if (tmp->left != NULL) {
                tmp = AllRight(tmp->left);
            }
            tmp->right = CreateNode(item, tmp);
            return;
        }
        Node* newNode = CreateNode(item, tmp);
        if (tmpData < item) {
            tmp->right = newNode;
        } else {
            tmp->left = newNode;
        }
    }
}

int SumLevel(Node* node, int level)
{
    if (node == NULL) {
        return 0;
    }
    if (level == 1) {
        return node->data;
    }
    return SumLevel(node->left, level - 1) + SumLevel(node->right, level - 1);
}

int BinaryTree_SumAllNode(BinaryTree* self, int level)
{
    return SumLevel(self->root, level);
};

Node* NodeMin(Node* left, Node* right)
{
    if (left == NULL) {
        return right;
    }
    if (right == NULL) {
        return left;
    }
    if (left->data < right->data) {
        return left;
    }
    return right;
}

Node* NodeMax(Node* left, Node* right)
{
    if (left == NULL) {
        return right;
    }
    if (right == NULL) {
        return left;
    }
    if (left->data > right->data) {
        return left;
    }
    return right;
}

Node* MinLevel(Node* node, int level)
{
    if (node == NULL) {
        return NULL;
    }
    if (level == 1) {
        return node;
    }
    Node* res = MinLevel(node->left, level - 1);
    Node* tmp = MinLevel(node->right, level - 1);
    return NodeMin(res, tmp);
}

int BinaryTree_FindMin(BinaryTree* self, int level)
{
    return MinLevel(self->root, level)->data;
}

Node* MaxLevel(Node* node, int level)
{
    if (node == NULL) {
        return NULL;
    }
    if (level == 1) {
        return node;
    }
    Node* res = MinLevel(node->left, level - 1);
    Node* tmp = MinLevel(node->right, level - 1);
    return NodeMax(res, tmp);
}

int BinaryTree_FindMax(BinaryTree* self, int level)
{
    return MaxLevel(self->root, level)->data;
}

int SwapNode(Node* left, Node* right)
{
    int res = 0;
    if (left->parent != NULL) {
        if (IsLeftChild(left)) {
            left->parent->left = right;
        } else {
            left->parent->right = right;
        }
    } else {
        res = 1;
    }

    if (right->parent != NULL) {
        if (IsLeftChild(right)) {
            right->parent->left = left;
        } else {
            right->parent->right = left;
        }
    } else {
        res = 1;
    }

    Node* tmp = left->parent;
    left->parent = right->parent;
    right->parent = tmp;

    tmp = left->left;
    left->left = right->left;
    right->left = tmp;

    tmp = left->right;
    left->right = right->right;
    right->right = tmp;

    if (left->left != NULL) {
        left->left->parent = left;
    }
    if (left->right != NULL) {
        left->right->parent = left;
    }

    if (right->left != NULL) {
        right->left->parent = right;
    }
    if (right->right != NULL) {
        right->right->parent = right;
    }
    
    return res;
}

void RemoveAndReplace(Node* remove, Node* replace)
{
    replace->parent = remove->parent;
    if (remove->parent != NULL) {
        if (IsLeftChild(remove)) {
            remove->parent->left = replace;
        } else {
            remove->parent->right = replace;
        }
    }
    free(remove);
}

void RemoveNode(BinaryTree* tree, Node* node)
{
    if (IsLeaf(node)) {
        if (node->parent == NULL) {
            free(node);
            tree->root = NULL;
            return;
        }
        if (IsLeftChild(node)) {
            node->parent->left = NULL;
        } else {
            node->parent->right = NULL;
        }
        free(node);
        return;
    }
    if (node->left != NULL && node->right != NULL) {
        BinaryTree_Iter iter;
        iter.node = node;
        BinaryTree_Iter_Next(&iter);
        if (SwapNode(node, iter.node) != 0) {
            tree->root = iter.node;
        } 
        return RemoveNode(tree, node);
    }
    if (node->left != NULL) {
        if (node->parent == NULL) {
            tree->root = node->left;
            node->left->parent = NULL;
        }
        RemoveAndReplace(node, node->left);
    } else {
        if (node->parent == NULL) {
            tree->root = node->right;
            node->right->parent = NULL;
        }
        RemoveAndReplace(node, node->right);
    }
}

void BinaryTree_Remove(BinaryTree_Iter* iter)
{
    Node* node = iter->node;
    BinaryTree_Iter_Next(iter);
    RemoveNode(iter->tree, node);
}

void NodeDestroy(Node* self)
{
    if (self == NULL) {
        return;
    }
    NodeDestroy(self->left);
    NodeDestroy(self->right);
    free(self);
}

void BinaryTree_Destroy(BinaryTree* self)
{
    NodeDestroy(self->root);
    free(self);
}
