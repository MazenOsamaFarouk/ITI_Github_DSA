// ITI_dsa5.c
#include <stdio.h>
#include <stdlib.h>

typedef struct queue_t
{
	int front;
	int back;
	int size;
	int count;
	int* arr;
}Queue;


void queue_create(Queue* me, int* arr, int arr_size)
{
	me->arr = arr;
	me->size = arr_size;
	me->front = 0;
	me->back = 0;
	me->count = 0;
}

void queue_enqueue(Queue* me, int num)
{
	/*check queue is full ? */
	if(!queue_isFull(me))
	{
		/* move data in array */
		me->arr[me->back] = num;
		/* incrmenet */
		/*
		if(me->back < me->size)
		{
			me->back++;
		}
		else{
			me->back = 0;
		}*/
		
	//	((me->back < me->size) ? (me->back++) : (me->back = 0)) ;
		me->back = (me->back +1 ) % me->size;
		me->count++;
	}
}
int queue_dequeue(Queue* me)
{
	int front_value;
	
	/*checl if empty */
	if(!queue_isEmpty(me))
	{
		front_value = me->arr[me->front];
		me->front=(me->front +1) % me->size;
		me->count--;
	}
	
	
	return front_value;
}
void queue_peekFront();
void queue_peekBack();
int queue_isFull(Queue* me)
{
	return (me->count == me->size);
}
int queue_isEmpty(Queue* me)
{
	return (me->count == 0) ;
}
void queue_clear(Queue* me)
{
	me->count = 0;
	me->front = 0;
	me->back = 0;
}





int main(void)
{
	
	Stack myStack;
	int s1[10];
	stack_create(&myStack,s1,10 );
	stack_push(&myStack, 50);
	stack_push(&myStack, 40);

}