#include <stdio.h>
#include <stdlib.h>
#include "CalendarQueue.h"

int main(){
  CalendarQueue* q = initqueue();
  for(double i = 0; i < 9; ++i) {
    display_queue(q);
    enqueue(new_node(i / 3), i / 3, q);
  }
  display_queue(q);
  while (dequeue(q) != NULL) {
	  display_queue(q);
  }
  display_queue(q);
  return 0;
}
