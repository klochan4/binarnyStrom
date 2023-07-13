#ifndef BINTREE_H
#define BINTREE_H

#include "Node.h"

typedef enum direction {
    LEFT,
    RIGHT
}DIRECTION;

class BinTree
{

private:
    uint8_t pulsesReceived;
    uint16_t pulseDuration;

public:
    class BinTree();
    bool createChild(Node* parentNode, DIRECTION dir);
};

#endif