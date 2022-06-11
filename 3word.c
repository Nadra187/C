//to count the total number of words in a string.
#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    puts("Enter the string");
    gets(str);
    printf("%c",str[5]);
    int l=strlen(str),flag=1;
    for(int i=0;i<l;i++){
        if(str[i]==' '){
            flag++;
        }
    }
    printf("Total Number of words in a string = %d",flag);
    return 0;
}