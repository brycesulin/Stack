#ifndef STACK
#define STACK

/*
 * stack.h contains the declarations
 * a stack of integers.
 *
 * Written by: Stuart Hansen
 * Date: February 9, 2017
 */
#include <stdlib.h>
#include <stdio.h>

// the struct for the stack
typedef struct stack {
   int * array;
   int size;
   int capacity;
    char top;
} Stack;

// A constructor that should allocated
// space for n elements in the stack
Stack * init (int n);

// Add an element to the stack
void push (int item, Stack * stk);

// Remove the top element from the stack
int pop(Stack * stk);

// See what is on top of the stack
// without removing it
int top(Stack * stk);

// Check if the stack is empty
int isEmpty(Stack * stk);

#endif
