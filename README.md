# Sample-calculator

## Student Information
   Name: Natnael Tsedeke
   ID: RMNS-7783-/23
   Course: DSA
   
## Algorithm
1. Function Declarations:
    *Declare functions for each arithmetic operation:
        int add(float,float)
        int subtract(float,float)
        int multiply(float,float)
        int divide(float,float)
2. Display Menu Function:
    *Create a function void displayMenu() to print the menu options to the console.
3. Main Function:
    *Initialize variables for user choice, numbers, and a loop control.
    *Use a while loop to keep the program running until the user chooses to exit:
        -Call displayMenu() to show the options.
        -Read the user's choice.
        -If the choice is 5 (exit), break the loop.
        -Otherwise, prompt the user to enter two numbers.
        -Use a switch statement to call the corresponding arithmetic function based on the user's choice, and display the result.
        -Handle division by zero with error checking.
4. End the Program:
    *Print a goodbye message when the user exits.