// ITI_dsa4.c
#include <stdio.h>
#include <stdlib.h>

#include "linklist.h"


int main(void)
{
	linklist mylist = linklist_create(0);
	
	for(int i=0; i<5; i++)
	{
		linklist_append(mylist, i*5);
	}
	
	
	/*input data from user*/
	int x,y;
	scanf("%d%d", &x,&y);
	Node* list=LL_create(0);
	list = LL_prepend(list,x);
	list = LL_prepend(list,y);
	
	LL_print(list);
	
}
