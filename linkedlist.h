#ifndef LINKEDLIST_HEADER
#define LINKEDLIST_HEADER

#include "Node.h"

typedef struct node* List;

List * makelist();
void add(struct node* entry, List * list);
struct node* delete(struct node* entry, List * list);
void display(List * list, int num);//num is the number of nodes on one line
void reverse(List * list);
void destroy(List * list);

#endif
