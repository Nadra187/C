//Given an array of sorted list of integer numbers, write a function
//to search for a particular item, using method of binary search, 
//using pointers and pointer arithmetic.
#include<stdio.h>
#include<string.h>
int search(int *arr,int k,int start,int end){
    int mid=(start+end)/2;
    if(*(arr+mid)==k){
        return mid;
    }
    else if(*(arr+mid)<k){
        search(arr,k,mid,end);
    }
    else if(*(arr+mid)>k){
        search(arr,k,start,mid);
    }
}

int main(){
    int l,i,n;
    printf("Enter the count of elements: \n");
    scanf("%d",&l);
    int num[l];    
    printf("Enter the  sorted elements: \n");
    for(i=0;i<l;i++){
        scanf("%d",&num[i]);
    }
    printf("Enter the element which is to be searched:\n");
    scanf("%d",&n);
    int result=search(num,n,0,l);
    printf("Index: %d",result);
    return 0;
}