// array.h
#ifndef _ARRAY_H
#define _ARRAY_H

typedef struct cvect_struct* cvect;

cvect cvect_create(unsigned int size );
void cvect_destroy(cvect me);
void cvect_set(cvect me, 
           unsigned int index,
		   int data );
int cvect_get(cvect me,unsigned int index);
void cvect_insert(cvect me,unsigned int index, int data);
void cvect_delete(cvect me,unsigned int index);



#define array_sz(a)  (sizeof(a)/sizeof(a[0]))
int array_insert(int arr[], int size, int num, int idx);
int array_print(int arr[], int size);
int* array_create_int(int size);
void array_insert_end(int *arr, int curr_size, int num);
int array_delete(int arr[], int size, int idx);

#endif
