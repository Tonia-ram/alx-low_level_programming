C - Structures, typedef

Resources:
- Programming in C by Stephen Kochan - Chapter 8, Working with Structures p163-189

Objectives:
- What are structures, when, why and how to use them
- How to use typedef

General Requirements:

- Used editors: vi, vim, emacs
- All files are compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All files end with a new line
- A README.md file, at the root of the folder of the project is present
- All code use the Betty style. Checked using betty-style.pl and betty-doc.pl
- No global variables were used
- No more than 5 functions per file
- The only C standard library functions allowed are printf, malloc, free and exit.
- The main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- Push header file
- All header files are include guarded 

Tasks:
- Task0: Define a new type struct dog with the following elements: name, type = char * age, type = float owner, type = char *
- Task1: Write a function that initialize a varia ble of type struct dog
- Task2: Write a function that prints a struct do g
- Task3: Define a new type dog_t as a new name fo r the type struct dog.
- Task4: Write a function that creates a new dog
- Task5: Write a function that frees dogs.
