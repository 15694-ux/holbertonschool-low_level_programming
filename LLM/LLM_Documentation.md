# Personal Documentation in relation to Large Language Models

### Holbertons Intro to LLM
LLMs aren't interchangeable, same prompts in different models have the potential to output significantly different results.  
Primarily in Clarity, Depth, Tone, Assumptions, and Reliability.  

- AI tools are not single, uniform systems.
- Model choice will influence results as much as prompt
- Platforms expose different models with different defaults
- Some models run remotely, while others are run locally with hardware constraints

The goal of this project is to develop judgement skills relating to which model is appropriate per given task and context

## Learning Objectives
- Explain, at a high level, what an LLM is and how it differs from other generative models.
- Distinguish between a model and the platform that exposes it.
- Compare outputs from different LLMs using identical prompts.
- Identify strengths, weaknesses, and failure modes of different models.
- Understand trade-offs between local and remote models.
- Reason about hardware, memory, and system constraints.
- Make informed decisions about model suitability for specific tasks.

### Resources
Uses the Models, LLMs, and Platforms resource provided for the project.

# General Requirements
- Use the exact same prompt when comparing between models.
- Focus on differences and trade-offs, not accuracy.
- Not expected to tune or optimize models.
- If my system cannot support local models, documenting the limitation is acceptable.
- All prompts and reflections must be written in my own words.

## Task 0 - Observing differences between models
Use at least two to three of the following models:
- ChatGPT - 1
- Gemini - 2
- Claude - 3
- Grok - Unused
- Imarena.ai - Unused

Prompt to use - "Explain what a pointer is in simple terms."

### Task 0 requirements

Compare outputs and observe
- Tone and verbosity
- Assumptions about prior knowledge
- Structure and clarity
- Whether limitations or caveats are mentioned

Following previous step, compose my own prompt that:
-Clearly defines the audience.
- Narrows the scope of the prompt

Run the refined prompt against the same platforms and compare the differences.



# Prompt - "Explain what a pointer is in simple terms."


# ChatGPT Output

A pointer is a variable that stores the memory address of another variable.

Think of it like this:

Imagine your computer's memory is a big apartment building.

A variable is an apartment where information is stored.

The memory address is the apartment number.

A pointer is a note that tells you which apartment to visit.

Simple example in C

c
int age = 25;
int *ptr = &age;
Here's what each part means:

int age = 25; creates a variable called age that stores 25.

&age means "the memory address of age".

int *ptr creates a pointer that can store the address of an integer.

ptr = &age makes the pointer point to age.

Visual representation
Variable: age

25
Stored at memory address 1000
Pointer points to this address

Pointer: ptr

1000
Stores the address of age
Two important symbols
In C:

& means get the address of a variable.

* means access the value at the address stored in a pointer (when used to dereference a pointer).

For example:


c
printf("%d", *ptr);
This prints:


text
25
Because ptr points to the memory location where age is stored.

Remember this!
A normal variable stores a value.

A pointer stores an address.

Dereferencing a pointer lets you access the value at that address.

In one sentence: A pointer is like a GPS location for data in your computer's memory. 


# Claude Output

A pointer is a variable that stores a memory address instead of a regular value.

An analogy: Imagine a street full of houses. Each house has an address, and inside each house is some stuff.  
A normal variable is like the house itself, holding the stuff directly. A pointer is like a slip of paper with a house's address written on it. The paper isn't the house, but it tells you where to find it.

In C:

c
int x = 42;      // a normal variable holding the value 42
int *p = &x;     // p holds the address of x

printf("%d\n", x);    // 42
printf("%p\n", p);    // the address of x, something like 0x7ffee4b2
printf("%d\n", *p);   // 42, "go to the address in p and read what's there"

There are two key symbols:

& means "address of". &x gives you where x lives in memory.
* means "follow the pointer". *p gives you the value stored at the address in p.  
(The * in the declaration int *p just says "p is a pointer to an int".)

You can also change the original through the pointer:

c
*p = 100;
printf("%d\n", x);    // now 100

Why pointers are useful:

Sharing and modifying data in functions. C passes arguments by copy, so to let a function change your variable, you pass its address.  
Working with arrays and strings. An array name behaves like a pointer to its first element.  
Dynamic memory. Functions like malloc hand you a pointer to memory you requested at runtime.  
Building data structures like linked lists and trees, where each piece points to the next.  

One common pitfall: a pointer that doesn't point at anything valid (uninitialized, or pointing at memory tha's been freed) causes crashes or strange bugs. Setting unused pointers to NULL and checking before using them is a good habit.  


# Gemini Output

A pointer is a variable that stores the memory address of another variable. Instead of holding an actual value like the number 10, it holds the exact location in your computer's memory where that number is kept.

The Street Address Analogy

-¢ A regular variable is like a house. It holds the actual items inside, such as a family or furniture.
-¢ A pointer is like a piece of paper with that house's street address written on it. It is not the house itself, but it tells you exactly where to go to find the house.

How It Works in Code

When you create a variable in a programming language like C or C++, your computer sets aside a small spot in its memory to store the data.
-¢ Storing theaddress. You can create a pointer and assign it the memory location of your variable. This location usually looks like a long hexadecimal number, such as 0x7ffee4b.
-¢ Dereferencing. If you want to read or change the data using the pointer, you follow the address to the original spot. Programmers call this action dereferencing.

Why Programmers Use Pointers

-¢ Faster performance. Passing a tiny memory address to a function is much faster than copying a massive file or list of data.
-¢ Shared updates. Multiple parts of a program can point to the same memory location. When one part changes the data at that address, every other part immediately sees the updated value.
-¢ Dynamic memory. Pointers allow programs to request extra memory space while they are running, which is essential for handling data that grows or shrinks unpredictably.


# Prompt - "Explain to me in simple terms what a pointer is, provide an example script with comments for each step, emphasising interactions related specifically to the pointer."

# Claude Output - Refined Prompt

A pointer is a variable that holds the memory address of another variable, rather than holding a value itself.

Think of a house and a slip of paper with its address on it. The house is your data, and the paper is the pointer.  
The paper isn't the house, but it tells you exactly where to find it, and if you go there you can look at the contents or change them.  

Example script  
```c  
#include <stdio.h>

int main(void) {
    int score = 10;              // a normal variable holding the value 10

    int *ptr;                    // declare a pointer to an int (the * means "pointer to")
                                 // it currently points nowhere valid yet

    ptr = &score;                // & = "address of": store score's address in ptr
                                 // ptr now "points to" score

    printf("score value:         %d\n", score);   // 10: the variable itself
    printf("score address:       %p\n", (void *)&score);  // where score lives in memory
    printf("ptr holds:           %p\n", (void *)ptr);     // same address as above
    printf("ptr's own address:   %p\n", (void *)&ptr);    // the pointer is a variable too,
                                                          // so it has its own address

    printf("value via pointer:   %d\n", *ptr);     // * = "dereference": follow the address
                                                    // and read the value there (10)

    *ptr = 99;                   // write through the pointer: go to the address in ptr
                                 // and store 99 there

    printf("score after change:  %d\n", score);    // 99: score changed, even though we
                                                    // never assigned to score directly

    ptr = NULL;                  // NULL means "points to nothing", a safe resting state
                                 // for a pointer that isn't in use

    if (ptr != NULL) {           // always check before dereferencing
        printf("%d\n", *ptr);    // skipped: dereferencing NULL would crash the program
    }

    return 0; 
}```  


Example output  

(Addresses will differ on your machine.)  

score value:         10  
score address:       0x7ffee4b2a1ac  
ptr holds:           0x7ffee4b2a1ac  
ptr's own address:   0x7ffee4b2a1b0  
value via pointer:   10  
score after change:  99    

The pointer operations to remember  
```Symbol	  	Where		Meaning  
int *ptr  	declaration  	ptr is a pointer to an int  
&score  	expression  	the address of score  
ptr = &score  	assignment  	make ptr point at score  
*ptr  		expression  	the value at the address ptr holds (reading)  
*ptr = 99  	assignment  	change the value at that address (writing)  
ptr = NULL  	assignment  	make ptr point at nothing```  

The * appears in two roles: in a declaration it means "this is a pointer",  
and in an expression it means "follow the pointer". 
That double use is the most common source of confusion for beginners.
