Introduction to Recursion in C programming.
Requirements:

General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
You are allowed to use _putchar
You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
Don’t forget to push your header file
You are not allowed to use any kind of loops
You are not allowed to use static variables

0. A function that prints a string, followed by a new line.
1. A function that prints a string in reverse.
2. A function that returns the length of a string.
3. A function that returns the factorial of a given number.
- Prototype: int factorial(int n);
- If n is lower than 0, the function should return -1 to indicate an error
- Factorial of 0 is 1
4. A function that returns the value of x raised to the power of y.
- Prototype: int _pow_recursion(int x, int y);
- If y is lower than 0, the function should return -1
5. A function that returns the natural square root of a number.
- Prototype: int _sqrt_recursion(int n);
- If n does not have a natural square root, the function should return -1 
6. A function that returns 1 if the input integer is a prime number, otherwise return 0.
- Prototype: int is_prime_number(int n);
7. A function that returns 1 if a string is a palindrome and 0 if not.
- Prototype: int is_palindrome(char *s);
- An empty string is a palindrome
8. A function that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0.
- Prototype: int wildcmp(char *s1, char *s2);
- s2 can contain the special character *.
- The special char * can replace any string (including an empty string)
