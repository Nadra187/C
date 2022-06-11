//to reverse a string using pointer
#include<stdio.h>
#include<string.h>

int main(){
    char *str;
    puts("Enter the string:");
    gets(str);
    int l=strlen(str);
    char rev[l];      
    str+=l-1;
    for(int i=0;i<l;i++,str--){
        rev[i]=*(str);
    }rev[l]='\0';
    printf("Reversed string is %s",rev);
    return 0;
}