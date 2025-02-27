/*

This program will make use of randomly generated integers. The way to use random
    numbers in C++ was shown in today's class, and is summarized here:

    0. Rename this file to Even.cpp
    
    - Detecting Odd and Even Numbers
        Remember: any number 𝑛 is an even number if 𝑛 is evenly divisible by two. In other
        words, integer division of 𝑛 by 2 will leave a remainder of 0 if 𝑛 is even, and 1 if 𝑛 is odd.
        You can test for this by using the modulus operator, as shown in this pseudocode:
        If ( (𝑛 % 2) is 0 ) :
            𝑛 is even;
        otherwise:
            𝑛 is odd
        For this lab you must create a separate method named isEven() as described here:
            isEven():
                This method takes one integer argument as input
                This method returns the Boolean value true if the number is even,
                otherwise it returns false.

Your Task
    Your program will consist of two methods: the main()
    method, and the isEven() method described above.
    The main() method will use a for loop to generate 1,000 random integers in the range
    [0,100] inclusive. It should use the isEven() method to determine whether each random number
    is even or odd.
    When the loop is finished, the program should display, in a "creative" format, the number of
    random numbers, even numbers, and odd numbers that were generated.
    (your exact numbers will be different, and you may use your own specific wording):

*/ 

/*
    Even
    This program will generate 1,000 numbers in the range of 0 to 100
    counting which ones were even, and which ones are odd and displaying them.
    Jadrian Montilla
    2/10/25
*/

#include <iostream>
#include <ctime>

bool isEven(int even){
    if (even % 2 == 0)
    {
        std::cout << even << " is an even number!" << std::endl;
        return true;
    }
    else {
        std::cout << even << std::endl;
        return false;
    }
    
}

int main(){

    srand(time(0));

    int counter;
    int number;
    int oddnum = 0;
    int evennum = 0;
    for (counter = 0; counter < 1000; counter++)
    {
        number = rand() % 101;
        if (isEven(number) == 0)
        {
            evennum++;
        }
        else 
        {
            oddnum++;
        }
        
    }
    std::cout << "\nOut of " << counter << " numbers, there has been:" << std::endl;
    std::cout << oddnum << " odd numbers."<< std::endl;
    std::cout << "and " << evennum << " even numbers."<< std::endl;
    return 0;
}
