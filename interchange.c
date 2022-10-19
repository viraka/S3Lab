#include<stdio.h>

void interchangeSort(int arr[],int n){
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }   
}

void main(){
    int n,arr[50];
    printf("enter no of elements:");
    scanf("%d",&n);
    printf("enter array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    interchangeSort(arr,n);
    printf("The sorted array is:");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
