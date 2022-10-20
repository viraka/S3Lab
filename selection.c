#include<stdio.h>

void main(){
    int a[50],n,i,j,temp,k;
    printf("enter no of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        k=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[k])
                k=j;
        }
        temp=a[i];
        a[i]=a[k];
        a[k]=temp;
    }
    printf("The array in sorted order is:\n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}