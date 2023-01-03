#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct bst
{
	int data;
	struct bst *left,*right;
}bst;

bst* newnode(int x)
{
    bst* temp = (bst*) malloc(sizeof(bst));
	temp->data = x;
	temp->left = NULL;
    temp->right = NULL;
	return temp;
}

bst* insert(bst* t,int x)
{
    if(t == NULL)
    {
        t=newnode(x);
    }
    else if(x < t->data)
    {
        if(t->left != NULL)
            insert(t->left,x);
        else
            t->left = newnode(x);
    }
    else if(x > t->data)
    {
        if(t->right != NULL)
            insert(t->right,x);
        else
            t->right = newnode(x);
    }
}

bst* find (bst* t,int x)
{
    if(t == NULL)
        return NULL;
    if (x < t->data)
        return(find(t->left,x));
    if(x > t->data)
        return(find(t->right,x));
    return t;
}

bst* findmin(bst* t)
{
    if(t == NULL)
        return t;
    if(t->left == NULL)
        return t;
    return(findmin(t->left));
}

bst* findmax(bst* t)
{
    if(t == NULL)
        return NULL;
    while(t->right != NULL)
        t = t->right;
    return t;
}

bool isleaf(bst* t)
{
    if(t == NULL)
        return false;
    if(t->left == NULL && t->right == NULL)
        return true;
    return false;
}

bst* deleteleaf(bst* t,int x)
{
    bst *p,*c; 
    if(t == NULL)
        return NULL;
    p=t;
    c=t;
    while(!isleaf(c))
    {
        p=c;
        if(c->left == NULL && x < c->data)
            c = c->left;
        else if(c->right == NULL && x > c->data)
            c = c->right;
        else   
            return t;
    }
    
    if(p == c && p->data == x)
    {
        p = NULL;
        c = NULL;
    }
    else if(p->left == c && c->data == x)
        p->left == NULL;
    else if(p->right == c && c->data == x)
        p->right == NULL;
    else
        return t;
}

bst* Remove(bst* t,int x)
{
    bst *t1,*r=t;
    t = find(t,x);
    if(t == NULL)
        return r;
    if(isleaf(t))
        return(deleteleaf(r,x));
    if(t->right != NULL)
    {
        t1 = findmin(t->right);
        t->data = t1->data;
        if(!isleaf(t1))
           t1 = Remove(t1,t1->data);
        else
            t = deleteleaf(t,t1->data);
    }
    else
    {
        t1 = findmax(t->left);
        t->data = t1->data;
        if(!isleaf(t1))
            t1 = Remove(t1,t1->data);
        else
            t = deleteleaf(t,t1->data);
    }
}

void main()
{
    bst *t=NULL;
    t = insert(t,3);
    t = insert(t,4);
    t = insert(t,2);
    printf("%d\n%d\n%d",t->data,t->left->data,t->right->data);
}