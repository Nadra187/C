//maximum occurring character in a string.
#include<stdio.h>
#include<string.h>

int main(){
    //scanning the characters of the string
    char str[100];
    printf("Enter the string.\n");
    gets(str);
    int l=strlen(str),i=0,count,j=0,dup[l],max,k;
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
    max= dup[0];
    for(i=1;i<l;i++){
        if(max<dup[i]){
            max=dup[i];
            k=i;
        }
    }
    printf("Maximum occurring character in the string is %c",str[k]);
    return 0;
}