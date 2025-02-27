/*

    Your task:
        - Rename this file to Roman.cpp

        In this file create a single main() method, that will perform the following algorithm:

            - Use a do-while loop to prompt the user for an integer input in the range 1
            through 10, inclusive. If the input is not in range let them try again. Repeat until
            the user successfully enters a correct value.

            - Once a valid value is entered, print a descriptive message that reports the
            roman numeral that is equal to the value given.

        Specifications:

            For full credit, your program must meet the following specifications:
                1. Your method of converting the number to a Roman numeral must use only one
                multi-branch if statement. You must not use the Boolean operators && (and),
                || (or), and ! (not) when performing the conversion.

                2. Use meaningful variable names and follow all naming conventions.
                
                3. Use meaningful prompts and output messages.

                4. User input that is invalid must be handled sensibly, as described above. Invalid
                input in this case would be a number that is not in the range [1, 10], inclusive.
                (You may assume that only integers will be input.) Your program must print an
                appropriate message if the user input is outside the range [1, 10] and allow the
                user to re-enter their number.

            Extra-credit opportunity:
                For up to 3 additional points, extend your program so that it generates the correct
                response for any integer value in the range [1, 100], inclusive.
                If you choose to do the extra credit, to achieve the maximum extra credit you may use
                at most two multi-branch if statements to generate the Roman numeral.
                (Hint: Don’t use a 100-branch if statement! Instead, find a creative way to separate the
                tens from the ones...)

*/

/*
    Roman
    Describes the roman numeral of the number that is entered.
    Jadrian Montilla
    1/30/25
*/

#include <iostream>

int main() {
    int num;
    do
    {
        std::cout << "Enter a number between 1 to 10: ";
        std::cin >> num;
        if (num == 1) 
            printf("%d / I, The first roman numeral.\n", num);
        
        else if (num == 2)
            printf("%d / II, The second roman numeral.\n", num);
        
        else if (num == 3)
            printf("%d / III, The third roman numeral.\n", num);
        
        else if (num == 4)
            printf("%d / IV, The fourth roman numeral.\n", num);
        
        else if (num == 5)
            printf("%d / V, The fifth roman numeral.\n", num);

        else if (num == 6)
            printf("%d / VI, The sixth roman numeral.\n", num);
        
        else if (num == 7)
            printf("%d / VII, The seventh roman numeral.\n", num);
        
        else if (num == 8)
            printf("%d / VIII, The eighth roman numeral.\n", num);
        
        else if (num == 9)
            printf("%d / IX, The nineth roman numeral.\n", num);
        
        else if (num == 10)
            printf("%d / X, The tenth roman numeral.\n", num);
        
        else 
            std::cout << "This number is over/under the requested amount. Try again." << std::endl;
        

    } while (num);

    return 0;
    
}