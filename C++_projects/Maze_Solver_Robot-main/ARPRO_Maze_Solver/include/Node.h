#ifndef NODE_H
#define NODE_H

#include <time.h>
#include <string.h>
#include <iostream>

class Node
{
public:
    int x, y; //Node position - little waste of memory, but it allows faster generation
    void *parent; //Pointer to parent node
    char c; //Character to be displayed
    char dirs; //Directions that still haven't been explored
};



#endif // NODE_H
