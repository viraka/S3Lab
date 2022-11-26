#include<stdio.h>
#include<stdlib.h>

typedef struct llist
{
	int data;
	struct llist *next;
}llist;



llist *insertfirst(llist *H,int x)
{
	llist* temp = (llist*) malloc(sizeof(llist));
	temp->data = x;
	temp->next = H;
	H = temp;
	return H;
}

llist *insertlast(llist *H,int x)
{
	llist* temp = (llist*) malloc(sizeof(llist));
	llist* current=H;
	temp->data = x;
	temp->next = NULL;
	if(H == NULL)
		H=temp;
	else
	{
		while (current->next != NULL)
			current = current->next;
		
		current->next = temp;
	}
	return H;
}

llist *search(llist *H,int x)
{	
	llist* current=H;
	while((current != NULL) && (current->data != x))
		current = current->next;
	return current;
}

void printllist(llist *H)
{
	llist* current = H;
    printf("\nThe elements are :\n");
	while (current!= NULL)
    {
		printf("%d ",current->data);
		current = current->next;
	}
}


int main()
{
	//int x;
	llist *H=NULL,*pos;
	H = insertfirst(H,1);
	H = insertfirst(H,2);
	H = insertlast(H,45);
	pos = search(H,1);
	printf("%p %d\n",pos,pos->data);
	printf("%p %d\n",H,H->data);
	H = insertfirst(H,23);
	pos = search(H,45);
	printf("%p %d",pos,pos->data);
	printllist(H);
    return 0;

}
