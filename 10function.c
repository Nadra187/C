 //Using pointers, write a function that receives a character string
//and a character as argument and 
//deletes all occurrences of this character in the string.
//The function should return the corrected string with no holes.
#include<stdio.h>
#include<string.h>

void func(char *base,char k){
    if(strchr(base,k)!=0){
    int p=strchr(base,k)-base;
    while((*(base+p)=*(base+p+1))!='\0'){
        p++;
    }
    *(base+p+1)='\0';
    func(base,k);
    }
}

int main(){
    char *str,ch;
    puts("Enter the string. \n" );
    gets(str);
    puts("Enter the character. \n");
    ch=getchar();
    func(str,ch);
    printf("New string: %s",str);
    return 0;
}