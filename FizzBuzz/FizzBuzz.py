# Fizzbuzz Game using for loop & if else
# Author: Chaitaly Kundu
# Date: 24-10-2020

# Game Rule: If any number is divided by 3 then this is 'Fizz'. If any number is divided by 5 then this is 'Buzz'.
#If any number is divided by 3 and 5 both or 15, then this is 'FizzBuzz'.



number = int(input("Enter the ending Number: "))        # input ending number
for i in range(1,number+1):    #loop
    if(i%15==0):            # Condition for fizzbuzz
        print("FizzBuzz")
    elif(i%3==0):           # Condition for fizz
        print("Fizz")
        continue
    elif(i%5==0):           # Condition for buzz
        print("Buzz")
        continue
    else:
        print(i)