//to Concatenate Strings using Pointer.
#include<stdio.h>
#include<string.h>

void concat(char *first,char *second){
    int l=strlen(first);
    *(first+l)=' ';
    l++;
    while((*(first+l)=*(second))!='\0'){
        l++;
        second++;
    }
    *(first+l)='\0';
}

int main(){
    char str1[100],str2[100];
    printf("Enter the first string: \n");
    scanf("%s",str1);
    printf("Enter the second string: \n");
    scanf("%s",str2);
    concat(str1,str2);
    printf("String after concatenation: \n%s",str1);
    return 0;
}