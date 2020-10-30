#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

List * makelist(){
  List * list = malloc(sizeof(List));
  if (!list) {
    return NULL;
  }
  *list = NULL;
  return list;
}

void display(List * list, int length) {
  node * current = *list;
  if(*list == NULL) 
    return;
  int i = 1;
  for(; current != NULL; current = current->next) {
    printf("%.2lf", current->priority);
    if(i >= length) {
      printf("\n->");
      i = 1;
    }
    else {
      printf("->");
      i++;
    }
  }
}

int compare_node(node *n1, node *n2) {
	return (n1->priority > n2->priority);
}

void add(node* entry, List * list) {
  node *previous = NULL;
  node *current = NULL;
  if (entry->next != NULL) entry->next = NULL;
	if(*list == NULL){
    *list = entry;
  }
	else {
		previous = NULL;
		current = *list;
		while (current && compare_node(entry,current) > 0) {
			previous = current;
			current = current->next;
		}
		if (current == NULL) {
			previous->next = entry;
		}
		else {
			if (previous != NULL) {
				entry->next = previous->next;
				previous->next = entry;
			}
			else {
				entry->next = *list;
				*list = entry;
			}
		}
	}
}

node* delete(node* entry, List * list){
  node * current = *list;            
  node * previous = current;
  if(entry == *list && entry != NULL) {
    *list = current->next;
    return current;
  }
  while(current != NULL){   
    if(current->next == entry){      
		previous->next = current->next;
		if(current == *list)
			*list = current->next;
		break;
    }                               
    previous = current;             
    current = current->next;        
  }
  return current;                                 
}                                   

void reverse(List * list){
  node * reversed = NULL;
  node * current = *list;
  node * temp = NULL;
  while(current != NULL){
    temp = current;
    current = current->next;
    temp->next = reversed;
    reversed = temp;
  }
  *list = reversed;
}

void destroy(List * list){
  node * current = *list;
  node * next = current;
  while(current != NULL){
    next = current->next;
    free(current);
    current = next;
  }
  free(list);
}
