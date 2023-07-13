#include <stdint.h>
#include "BinTree.h"

BinTree::BinTree() {
    pulsesReceived = 0;
    pulseDuration = 0;
}

BinTree::~BinTree() { 

}

#define DEFAULT_MALLOC_SIZE 100

bool BinTree::createChild(Node* parentNode, DIRECTION dir) {
    Node** childToSet = NULL;
    if (dir == LEFT) {
        childToSet = &parentNode->Left;
    }

    if (dir == RIGHT) {
        childToSet = &parentNode->Right;
    }

    if (childToSet) {
        printf("Dany vrchol uz obsahuje dieta vo zvolenom smere\r\n");
        return false;
    }

    char* tmp = (char*)malloc(DEFAULT_MALLOC_SIZE);

    printf("Vytvor hodnotu pre dieta: ");
    scanf(tmp);

    realloc(tmp, strlen(tmp + 1);
    (*childToSet) = new Node(parentNode, tmp);
    
    return true
}

Node* BinTree::Insert(Node* node, int key)
{
    // If BST doesn't exist
    // create a new node as root
    // or it's reached when
    // there's no any child node
    // so we can insert a new node here
    if (node == NULL)
    {
        node = new Node;
        node->Key = key;
        node->Left = NULL;
        node->Right = NULL;
        node->Parent = NULL;
    }
    // If the given key is greater than
    // node's key then go to right subtree
    else if (node->key < key) {
        node->Right = Insert(node->Right, key);
        node->Right->Parent = node;
    }
    // If the given key is smaller than
    // node's key then go to left subtree
    else
    {
        node->Left = Insert(node->Left, key);
        node->Left->Parent = node;
    }



