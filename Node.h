#ifndef NODE_HEADER
#define NODE_HEADER

typedef struct node {
    double endTime;
    struct node * next;
} node;

node* new_node(double priority);

#endif