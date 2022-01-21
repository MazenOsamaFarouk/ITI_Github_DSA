// ITI_dsa2.c
#include <stdio.h>
#include <stdlib.h>
#include "array.h"

cvect v1;


v1.vect;

void matrix_mul(int (*a)[3], int (*b)[3],int m[][3], int r, int c)
{
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			for(int k=0; k<c; k++)
			{
				m[i][j] += (a[i][k]*b[k][j]) ;
			}
		}	
	}
}



int main(void)
{
	int** mat=malloc(3 * sizeof(int**));
	for(int i=0; i<3; i++)
	{
		mat[i] = malloc(3 * sizeof(int*));
	}
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			mat[i][j] = (i*j) ;
		}
	}
	
	
	
	int a[3][3] = {
		{2,0,0},
		{0,2,0},
		{0,0,2}
	};
	
	int b[3][3] = {
		{1,1,1},
		{3,3,3},
		{5,5,5}
	};
	
	
	int m[3][3] = {0};
	
	// matrix_mul(a,b,m,3,3);
	
	
	for(int r=0; r<3; r++)
	{
		for(int c=0; c<3; c++)
		{
			printf("%d ", mat[r][c]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
}