#ifndef CALENDARQ_HEADER
#define CALENDARQ_HEADER

#include "linkedlist.h"

#define QSPACE 15000

typedef struct calendar_queue CalendarQueue;

List A[QSPACE];

CalendarQueue* initqueue();
void enqueue(struct node* entry, double priority, CalendarQueue* queue);
struct node* dequeue(CalendarQueue* queue);
void display_queue(CalendarQueue* queue);

#endif