// ITI_dsa.c
#include <stdio.h>
#include <stdlib.h>

#include "array.h"
/*
1- returning a ptr from malloc inside a function 
   -> is that a dangling pointer? NO , reason: Heap

2- sizeof(arr) == sizeof int *ptr (malloc) ? 

*/



/*
 int* ptr =(casting*)malloc( 5 * 4);   // garbage value
 int* ptr =(casting*)calloc(5 , 4);   // zero the elements after allocation
 int* ptr = (casting*)realloc(ptr, 3*sizeof(int));
 
 free(ptr); 
*/
#define MAX    10


int main(void)
{

	
	
	//int* a2 = array_create_int(MAX);
	
	//printf("static=%d, dynamic=%d\n", sizeof(arr_static), sizeof(ptr));
	int a2[MAX]={0};
	for(int i=0; i<MAX; i++)
	{
		a2[i] = i*10 ;
	}
	array_print(a2, MAX);
	
//	array_insert_end(a2, MAX, 200);
	array_delete(a2,MAX,4);
	array_print(a2, MAX);

}
// corner cases:
// 1- insert in the last element


