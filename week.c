#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number from 1 to 7 :");
    scanf("%d",&n);
    if(n<=7)
    {
        if(n==1)
        printf("SUNDAY");
        else
        if(n==2)
        printf("MONDAY");
        else 
        if(n==3)
        printf("TUESDAY");
        else 
        if(n==4)
        printf("WEDNESDAY");
        else 
        if(n==5)
        printf("THURSDAY");
        else 
        if(n==6)
        printf("FRIDAY");
        else 
        if(n==7)
        printf("SATURDAY");

    }

    else
    printf("INVALID ENTRY");
    return 0;
}