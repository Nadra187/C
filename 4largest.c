//Find the largest element using Dynamic Memory Allocation.
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int i,size;
    printf("Count of elemnts:\n");
    scanf("%d",&size);
    ptr=(int*)malloc(sizeof(int)*size);
    printf("ENter the numbers: \n");
    for(int i=0;i<size;i++){
        scanf("%d",(ptr+i));
    }
    int lar=*ptr;
    for(int i=1;i<size;i++){
        if(*(ptr+i)>lar){
                lar=*(ptr+i);
        }
    }
    printf("Largest elemnt: %d",lar);
    return 0;
}