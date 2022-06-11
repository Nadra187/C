//Concatenating Two Strings Manually.
#include<stdio.h>
#include<string.h>

int main(){
    char str1[100],str2[100];
    puts("Enter the string one: \n");
    gets(str1);
    puts("Enter the string two: \n");
    gets(str2);
    int i=strlen(str1),j=0;
    str1[i]=' ';
    i++;
    while((str1[i]=str2[j])!='\0'){
        i++;
        j++;
    }
    str1[i]='\0';
    printf("String after concatination: \n%s",str1);
    return 0;
}