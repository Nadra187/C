//to count number of vowels in a given string
#include<stdio.h>
#include<string.h>

int main(){
    char *str;
    puts("Enter the String: \n");
    gets(str);
    int l=strlen(str),vowel=0;
    while(*str!=0){
        switch(*str){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            vowel++;
            break;
        }
        str++;
    }
    printf("Number of vowels in the given string = %d",vowel);
    return 0;
}