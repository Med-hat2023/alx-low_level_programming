0x0C. C - More malloc, free
By Julien Barbier
Weight: 1
Ongoing second chance project - started 09-23-2021, must end by 09-25-2021 (in about 16 hours) - you're done with 0% of tasks.
QA review fully automated.
In a nutshell...
Auto QA review: 0.0/36 mandatory & 0.0/21 optional
Altogether: 0.0%
Mandatory: 0.0%
Optional: 0.0%
Calculation: 0.0% + (0.0% * 0.0%) == 0.0%
Concepts
For this project, students are expected to look at this concept:

Automatic and dynamic allocation, malloc and free
Resources
Read or watch:

Do I cast the result of malloc?
man or help:

exit (3)
calloc
realloc
Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
How to use the exit function
What are the functions calloc and realloc from the standard library and how to use them
Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc... is forbidden
You are allowed to use _putchar
You don't have to push _putchar.c, we will use our file. If you do it won't be taken into account
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
Don't forget to push your header file
--

4. _realloc
#advanced

Score: 0.00% (Checks completed: 0.00%)

Write a function that reallocates a memory block using malloc and free

Prototype: void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
where ptr is a pointer to the memory previously allocated with a call to malloc: malloc(old_size)
old_size is the size, in bytes, of the allocated space for ptr
and new_size is the new size, in bytes of the new memory block
The contents will be copied to the newly allocated space, in the range from the start of ptr up to the minimum of the old and new sizes
If new_size > old_size, the "added" memory should not be initialized
If new_size == old_size do not do anything and return ptr
If ptr is NULL, then the call is equivalent to malloc(new_size), for all values of old_size and new_size
If new_size is equal to zero, and ptr is not NULL, then the call is equivalent to free(ptr). Return NULL
Don't forget to free ptr when it makes sense
