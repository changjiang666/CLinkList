#pragma once 
#define TRUE	1
#define OK		1
#define ERROR	0


typedef int ElemType;
typedef int Status;
typedef struct Node
{
	ElemType data;
	struct Node *next;
}Node, *CLinkList;


//init the circle LinkList
void InitCLinkList(CLinkList *L);

//return the length of circle LinkList
int LengthCLinkList(CLinkList *L);

//insert a node to the circle LinkList, the location is i
Status InsertCLinkList(CLinkList *L, int i);

//delete a node from the circle LinkList, the location is i
Status DeleteCLinkList(CLinkList *L, int i);

//search a node which data is given
int  SearchCLinkList(CLinkList *L, ElemType e);

//traverse the circle linklist
void TraverseCLinkList(CLinkList *L);

