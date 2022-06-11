//Write a function day_name that receives a number n and returns a
//pointer to a character string containing the name of the
//corresponding day. The day names should be kept in a static table 
//of character strings local to the function
#include<stdio.h>

char *day_name(int n){
    char *day[7]={
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday"
    };
    return(day[n-1]);
}

int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Day: %s",day_name(num));
    return 0;
}