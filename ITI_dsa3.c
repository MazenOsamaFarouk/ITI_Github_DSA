// ITI_dsa3.c
#include <stdio.h>
#include <stdlib.h>

// Assigments: 
// 1- send gmails to Eng/ Hesham
// 2- we will create a drive for each student
// 3- you will upload your assignmetns on the shared drive

// Rules for Questions:
// 1- you can ask any time only throuhg Eng/hesham 

/*
	int* a[3];      // array of 3 pointers to int : reserves an array of 3 elements
	int (*b)[3];    // pointer to array of 3 int : reserve only one pointer
	
	printf("size of a = %d\n", sizeof(a)); // -> 24 = 3 * sizeof pointer() -> 8
	printf("size of b = %d\n", sizeof(b)); // -> 8 -> sizeof pointer
	
	printf(" size of a step = %d\n",sizeof(*a) ); // -> 8 -> sizeof pointer
	printf(" size of b step = %d\n",sizeof(*b) ); // -> 12 -> 3*sizeof(int)
*/
#include "array/array.h"
#include "Algorithms/algorithms.h"
int main(void)
{
	int arr[] = {56,72,84,14,56,45,60,61,32};
	
	array_print(arr, array_sz(arr));
	
	insertion_sort(arr,array_sz(arr) );
	
	array_print(arr, array_sz(arr));	
}
