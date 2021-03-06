#
/* Fizzbuzz Game using for loop & if else
 Author: Chaitaly Kundu
 Date: 24-10-2020

 Game Rule: If any number is divided by 3 then this is 'Fizz'. If any number is divided by 5 then this is 'Buzz'.
 If any number is divided by 3 and 5 both or 15, then this is 'FizzBuzz'. */


#include<stdio.h>

// main function
int main()
{
    int end_number,i=0;
    printf("Enter the end number: ");       // input ending number
    scanf("%d",&end_number);
    for(i=1;i<=end_number;i++)      //loop
    {
        if(i%15==0)                 // Condition for fizzbuzz
            printf("\nFizzBuzz");
        else if(i%3==0)             // Condition for fizz
            printf("\nFizz");
        else if(i%5==0)             // Condition for buzz
            printf("\nBuzz");
        else
            printf("\n%d",i);
    }
    return 0;
}