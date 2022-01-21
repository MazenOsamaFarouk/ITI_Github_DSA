// linklist.h

typedef struct node Node;
typedef struct ll_t* LinkList;

LinkList LL_create(int n);
void LL_prepend(LinkList me, int n);
void LL_append(LinkList me,int n);


