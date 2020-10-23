#include<stdio.h>
int main()
{
    int end_number,i=0;
    printf("Enter the end number: ");
    scanf("%d",&end_number);
    for(i=1;i<=end_number;i++)
    {
        if(i%15==0)
            printf("\nFizzBuzz");
        else if(i%3==0)
            printf("\nFizz");
        else if(i%5==0)
            printf("\nBuzz");
        else
            printf("\n%d",i);
    }
    return 0;
}