//maximum occurring character in a string.
#include<stdio.h>
#include<string.h>

int main(){
    char str[80];
    printf("ENTER THE STRING.\n");
    gets(str);
    int l=strlen(str);
    int i=0,j=0,max=0,k=0;
    int flag[l];                         
    //array to store the count of characters
    //filling flag array 
    while(i<l){
        flag[i]=0;
        for(j=i+1;j<l;j++){
            if(str[i]==str[j]){
                (flag[i])++;
            }
        }
        i++;
    }
    //finding max in flag array
    max= flag[0];
    for(i=1;i<l;i++){
        if(flag[i]>max){
            max= flag[i];
            k=i;
        }
    }
    printf("The maximum occuring character in the given string is %c",str[k]);
    return 0;
}