#include <stdint.h>
#include "Node.h"

Node::Node(Node* parentNode, char* paData) {
    Parent = parentNode;
    data = paData;
    Left = NULL;
    Right = NULL;
}

