#include <stdlib.h>
#include <stddef.h>
#include "Node.h"

node* new_node(double priority) {
  node *n = (node *)malloc(sizeof(node));
  if (!n) {
    return NULL;
  }
  n->endTime = priority;
  n->next = NULL;
  return n;
}