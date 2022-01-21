/*
	name: Mazen Osama
	Date: 14/1/2022
	Version: 1.0
*/

#ifndef  _ALGORITHMS_H
#define  _ALGORITHMS_H

typedef enum 
{
	ASCENDING,
	DSCENDING
}Order;


void binary_search(int arr[], int size , int key);


void bubble_sort(int arr[], int size);
void selection_sort(int arr[], int size);
void insertion_sort(int arr[], int size);


#endif
