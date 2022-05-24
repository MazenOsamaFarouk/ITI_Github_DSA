// linklist.c
// this the implementation file for linked lists

#include "linklist.h"

struct node
{
	int data;
	struct node* next;
} ;


struct ll_t
{
	Node* head;
	Node* tail;
	int count;
};

Node* LL_create(int n)
{
	Node* head = (Node*)malloc(sizeof(Node));
	if(head != NULL)
	{
		head->data = n;
		head->next= NULL;
	}
	
	return head;
}


LinkList LL_create(int n)
{
	LinkList me = (LinkList)malloc(sizeof(struct ll_t));
	if(me != NULL)
	{
		me->head = (Node*)malloc(sizeof(Node));
		if(me->head != NULL)
		{
			me->head->data = n;
			me->head->next= NULL;
			me->tail = me->head;
			me->count = 1;
		}
	}
	
	
	return me;
}


void LL_prepend(LinkList me, int n)
{
	Node* newnode;
	newnode=(Node*)malloc(sizeof(Node));
	if(newnode != NULL)
	{
	newnode->data=n;
	newnode->next=me->head;
	me->head = newnode;	
	me->count++;
	}
}

void LL_print(Node* head)
{
	printf("-----------------\n");
	while(head != NULL)
	{
		printf("%d\n", head->data);
		head = head->next;
	}
	printf("-----------------\n");	
}

void LL_append(LinkList me,int n)
{
	Node* list = head;
	while(1)
	{
		if(list->next == NULL)
		{
			Node* newnode=(Node*)malloc(sizeof(Node));
			if(newnode != NULL)
			{
				newnode->data=n;
				newnode->next = NULL;
				me->list->next = newnode;
			}
			break;
		}
		list = list->next;
	}
}

void LL_append(LinkList me,int n)
{
	Node* newnode=(Node*)malloc(sizeof(Node));
	if(newnode != NULL)
	{
		newnode->data = n;
		newnode->next = NULL;
		me->tail->next = newnode; // actual insertion
		me->tail = newnode; // update of tail pointer
		me->count++; // update count of current list
	}
}

Node* LL_search(Node* head, int key)
{
	Node* list= head;
	while( list != NULL  )
	{
		if(list->data== key )
		{
			break;
		}
		list=list->next;
	}
	
	return list;
}

void LL_insertAfter(Node* prev_node,int value)
{
	if(prev_node != NULL)
	{
		Node* newnode=(Node*)malloc(sizeof(Node));
		if(newnode!= NULL)
		{
			newnode->data= value;
			newnode->next = prev_node->next;
			prev_node->next = newnode;
		}
	}
}

void LL_deleteNext(Node* prev_node)
{
	Node* temp=prev_node->next;
	prev_node->next = temp->next;
	free(temp);
}

void LL_sort(Node* head)
{
	Node* ni;
	Node* nj;
	// no-iterations
	for(ni=head; ni->next != NULL; ni=ni->next)
	{
	// no-passes
		for(nj=ni->next; nj != NULL; nj=nj->next)
		{
			if(nj->data < ni->data)
			{
				swap(&(nj->data), &(ni->data));
			}
		}
}
