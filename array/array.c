// array.c

#include <stdio.h>
#include <stdlib.h>

#include "array.h"
/*

 struct  cvect_struct{
	int *vect;
	unsigned int size ;
	unsigned int capacity;
	unsigned int element_size;
};

cvect cvect_create(unsigned int size , int sizeof_element)
{
	cvect me = (cvect)malloc(sizeof(struct cvect_struct));
	me->vect = (int*)malloc(sizeof(int) * size);
	me->size = size ;
	me->capacity = size ;
	return me ;
}

void cvect_destroy(cvect me)
{
	free(me->vect);
	free(me);
}
void cvect_set(cvect me, 
           unsigned int index,
		   int data )
{
	if(index < me->size)
	{
		me->vect[index] = data ;
	}
}
int cvect_get(cvect me,unsigned int index)
{
	if(index <me->size)
	{
		return me->vect[index];
	}
}
void cvect_insert(cvect me,unsigned int index, int data)
{
	if(index < me->size)
	{
		if(me->size == me->capacity)
		{	me->capacity = ((me->size*(100+10))/100)*sizeof(int);
			me->vect = realloc(me->vect,me->capacity);
		}
		me->size++ ;
	
		
	}
	
}
void cvect_delete(cvect me,unsigned int index);
*/

int* array_create_int(int size)
{
	int* ptr= (int*)malloc(size * sizeof(int));
	return ptr;
}

void array_insert_end(int *arr, int curr_size, int num)
{
	int *arr2 = (int*)realloc(arr, (curr_size+1)*sizeof(int));
	
	arr = arr2;
	arr[curr_size] = num ;

}

int array_insert(int arr[], int size, int num, int idx)
{
	int error_status = 0;
	if(idx < size-1)
	{
		// shift array elements to the right
		for(int i=size-2 ; i >= idx  ; i--)
		{
			arr[i+1] = arr[i];
		}
		// insert the new element in the required index
		arr[idx] = num ;
	}
	else{
		printf("index out of bounds!!\n");
		error_status = -1;
	}
	return error_status;
}

int array_delete(int arr[], int size, int idx)
{	
if(idx<= size-1)
{
	int i;
	for(i=idx; i<size-1; i++)
	{
		arr[i] = arr[i+1];
	}
	arr[i] = 0 ;
}
else if(idx == size-1)
{
	arr[idx]= 0;
}
else
{
	printf("array out of bounds!!\n");
}

}

int array_print(int arr[], int size)
{
	for(int i=0; i<size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
