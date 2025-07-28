Aim: To understand and implement conditional statements and control structures in C++ through programs that:
1. Determine whether a number is positive/negative and even/odd.
2. Identify whether a character is a vowel or a consonant.
3. Print the month name based on user input using a switch statement.
4. Create a simple calculator performing basic arithmetic operations.
5. Find the largest among three numbers using nested if statements.

Apparatus:
1. GNU g++ compiler or any standard C++ compiler
2. Code editor or IDE (e.g., Visual Studio Code, Code::Blocks)

Program Explanation:

Program 1: Even/Odd and Positivity Check
Takes an integer input.
Checks if the number is positive.
If yes, further checks if it’s even or odd using modulo operator %.
Otherwise, prints that the number is negative.

Program 2: Vowel or Consonant
Accepts a single character input.
Checks if the character matches any vowel (both uppercase and lowercase) using logical OR (||).
Prints whether the character is a vowel or consonant.

Program 3: Month Name Display Using Switch
Prompts user to enter a number (1 to 12).
Uses a switch statement to print the corresponding month name.
Prints “INVALID CHOICE!!!!” for invalid input.

Program 4: Simple Calculator
Accepts two integer inputs and an operation choice.
Uses switch to perform addition, subtraction, multiplication, or division.
Handles division by zero by displaying “not defined”.
Prints the result or prompts to enter a valid option for invalid choices.

Program 5: Largest Number Using Nested If
Accepts three integers.
Uses nested if statements to compare the numbers and find the largest.
Prints which number is the largest.

Algorithm:

Program 1:
1, Input number a.
2. If a > 0:
3. If a % 2 == 0, print "even".
  Else print "odd".
  Else print "negative".
4. End  

Program 2:
1. Input character a.
2. If a is one of {a, e, i, o, u, A, E, I, O, U}, print "vowel".
   Else print "consonant".
3. End  

Program 3:
1. Input month number choice.
2. Use switch(choice):
3. Case 1 to 12: print corresponding month.
   Default: print "INVALID CHOICE!!!!".
4. End   

Program 4:
1. Input two numbers a and b.
2. Display calculator menu and input choice c.
3. Use switch(c):
   Case 1: print a + b.
   Case 2: print a - b.
   Case 3: print a * b.
   Case 4: if b != 0, print a / b; else print "not defined".
   Default: print "Enter Valid option".
4. End
   
Program 5:
1. Input three numbers a, b, c.
2. If a > b and a > c, print a as largest.
   Else if b > c and b > a, print b as largest. 
   Else print c as largest.
3. End   

Key Concepts:
Conditional Statements: Implementation of if, else if, else, and nested if to control program flow.
Logical Operators: Using || (OR) to check multiple conditions.
Switch-Case: Handling multiple discrete choices efficiently.
Arithmetic Operations: Using modulo to determine even or odd.
Input Validation: Ensuring valid inputs, especially in calculator and month programs.
Nested Conditions: Using nested if statements for multi-level decision making.

Conclusion:
These programs collectively enhance understanding of decision-making constructs in C++. They demonstrate practical usage of conditionals and switch-case statements to solve common programming problems such as classification (vowel/consonant), control flow in menus (month names, calculator), and numerical comparisons. Mastering these concepts is essential for writing efficient, readable, and maintainable code.
