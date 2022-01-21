// algorithms.c

#include <stdio.h>

void swap(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y ;
	*y = temp;
}
void insertion_sort(int arr[], int size)
{
	int temp;
	int j;
	for(int i= 1; i< size; i++)
	{
		temp = arr[i];
		j = i-1;
		while((j >=0)  && (arr[j] > temp))
		{
			/* insertion algorithmm*/
			arr[j+1]=arr[j];	
			j--;
		}
		arr[j+1] = temp; /* actual insertion */
	}
}

void selection_sort(int* arr, int size)
{
	
	// no-iterations
	for(int i=0; i< size-1; i++)
	{
	// no-passes
		
		for(int j=i+1; j<size; j++)
		{
			if(arr[j] < arr[min_idx])
			{
				swap(&arr[j], &arr[i]);
			}
		}
		
		
	}
}

void bubble_sort(int arr[], int size)
{
	// no-passes
	for(int i=0; i<size-1; i++)
	{
	// no-iterations
	   for(int j=0; j<size-1-i  ; j++)
	   {
		   
			 if(arr[j] > arr[j+1])
			 {
			   swap(&arr[j], &arr[j+1]) ;
		     }  
		   
		   
	   }
	}
}

