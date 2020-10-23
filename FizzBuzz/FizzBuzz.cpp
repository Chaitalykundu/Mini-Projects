/* Fizzbuzz Game using for loop & if else
 Author: Chaitaly Kundu
 Date: 24-10-2020

 Game Rule: If any number is divided by 3 then this is 'Fizz'. If any number is divided by 5 then this is 'Buzz'.
 If any number is divided by 3 and 5 both or 15, then this is 'FizzBuzz'. */


#include<iostream>

using namespace std;

int main()
{
    int End_Number, i;
    cout << "Enter the ending number: " ;   // input ending number
    cin >> End_Number;

    // loop
    for(i=1;i<=End_Number;i++)
    {
        if(i%15==0)                 // Condition for fizzbuzz
        {
            cout << "FizzBuzz" << endl;
        }
        else if(i%3==0)             // Condition for fizz
        {
            cout << "Fizz" << endl;
        }
        else if(i%5==0)             // Condition for buzz
        {
            cout << "Buzz" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }
    return 0;
}