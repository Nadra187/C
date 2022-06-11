#include<stdio.h>
#include<string.h>

int main(){
    char str[20];
    int flag=0;
    printf("enter the string \n");
    scanf("%s",str);
    int l=strlen(str);
    for(int i=0,j=l-1;i<=l/2;i++,j--){
        if(*(str+i)!=*(str+j)){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("NOT PALINDROME!");
    }
    else{
        printf("PALINDROME!");
    }
    return 0;
}