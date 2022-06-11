//calculate the Frequency of characters in a string
#include<stdio.h>
#include<string.h>

int main(){
    //scanning the characters of the string
    char str[100];
    printf("Enter the string.\n");
    gets(str);
    int l=strlen(str),i=0,count,j=0,dup[l];
    for(i=0;i<l;i++){
        dup[i]=-1;
    }
    //finding the frequency
    for(i=0;i<l;i++){
        count=1;
        for(j=i+1;j<l;j++){
            if(str[i]==str[j]){
                count++;
                dup[j]=0;
            }
        }
        if(dup[i]!=0){
            dup[i]=count;
        }
    }
    //printing the frequency
    for(i=0;i<l;i++){
        if(dup[i]>=1){
            printf("frequency of %c is %d.\n",str[i],dup[i]);
        }
    }
    return 0;
}