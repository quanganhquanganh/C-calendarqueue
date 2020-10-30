#ifndef CALENDARQ_HEADER
#define CALENDARQ_HEADER

#include "linkedlist.h"

#define QSPACE 15000

typedef struct calendar_queue CalendarQueue;

List A[QSPACE];

//CalendarQueue* localinit(int queue_base, int number_of_buckets,
//                        double bucket_width, double start_priority);
CalendarQueue* initqueue();
void enqueue(struct node* entry, double priority, CalendarQueue* queue);
struct node* dequeue(CalendarQueue* queue);
void resize(CalendarQueue** original_queue, int newsize);
void display_queue(CalendarQueue* queue);

#endif