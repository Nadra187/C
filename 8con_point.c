//to Concatenate Strings using Pointer.
#include<stdio.h>
#include<string.h>

int main(){
    char *str1,*str2;
    // char *str1[100], *str2[100];
    printf("Enter the first string: \n");
    scanf("%s",str1);
    printf("%s",str1);
    printf("Enter the second string: \n");
    scanf("%s",str2);
    int l=strlen(str1);
    *(str1+l)=' ';
    l++;
    while((*(str1+l)=*(str2))!='\0'){
        l++;
        str2++;
    }
    *(str1+l)='\0';
    printf("String after concatenation: \n%s",str1);
    return 0;
}