// stack.c


typedef struct{
	int top;
	int count;
	int arr_size;
	int* arr;
}Stack;


void stack_create(Stack* me, int* arr, int arr_size)
{
	if(me != NULL)
	{
		me->arr = arr;
		me->arr_size = arr_size;
		me->top = 0;
		me->count=0;
	}
}
void stack_push(Stack* me, int value)
{
	/* Check it the stack is Full */
	if(!stack_isFull(me))
	{
		/* move data in array */
		me->arr[me->top] = value;
		/* increment top */
		if(me->top < me->arr_size)
		{
			me->top++;
		}
		/* increment count */
		me->count++;
	}
}
int  stack_pop(Stack* me)
{
	int top_value=-1;
	/* check if empty */
	if(!stack_isEmpty(me))
	{
		me->top--;
		me->count--;
		top_value = me->arr[me->top];
	}
	
	return top_value;
}
int stack_peek(Stack* me)
{
	int top_value=-1;
	/* check if empty */
	if(!stack_isEmpty(me))
	{
		top_value = me->arr[me->top -1];
	}
	
	return top_value;
}
int stack_isFull(Stack* me)
{
	return (me->top == me->arr_size);
}

int stack_isEmpty(Stack* me)
{
	return  (me->top == 0) ;
}
void stack_clear(Stack* me)
{
	me->top = 0;
	me->count=0;
}
void stack_print(Stack* me)
{
	/*
	top -> 12
		   20
		   30
		   40
	*/
	
}

