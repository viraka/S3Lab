#include<stdio.h>
#include<stdlib.h>

void push(int s[],int size,int *top,int x){
    if (*top < size)
    {
        *top=*top+1;
        s[*top]=x;
    }
    else
        printf("stack overflow\n");
}

void pop(int s[],int size,int *top){
    if(*top==-1){
        printf("stack underflow\n");
    }
    else{
        printf("popped %d\n",s[*top]);
        *top=*top-1;
    }
}

void seek(int s[],int size,int *top){
    printf("elements in stack are:\n");
    for(int i=0;i<=*top;i++){
        printf("%d\n",s[i]);
    }
}


void main(){
    int *a,*top,size,T=-1;
    top=&T;
    printf("enter size of stack\n");
    scanf("%d",&size);
    a=(int*)malloc(size*sizeof(int));
    push(a,size,top,4);
    pop(a,size,top);
    push(a,size,top,1);
    push(a,size,top,5);
    push(a,size,top,7);
    seek(a,size,top);
    printf("top=%d\n",T);
    free(a);
}
