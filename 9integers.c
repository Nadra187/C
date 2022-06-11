//program using pointers to read in an array of integers and print its elements in reverse order.
#include<stdio.h>

int main(){
    int l,i;
    puts("Enter the count of integers: \t");
    scanf("%d",&l);
    int *ptr[l];
    puts("Enter the integers: \n");
    for(i=0;i<l;i++){
        scanf("%d",ptr+i);     //why not ptr++
    }
    printf("Entered integers(in reverse order): \n");
    for(i=l-1;i>=0;i--){
        printf("%d \n",*(ptr+i));
    }
    return 0;
}