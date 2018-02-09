/*
 * File: stack.c
 * Author: Bryce Sulin
 *
 * This file defines the functions found in stack.h
 */
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include "stack.h"

/* Function to construct the Stack of given capacity */
Stack * init (int n)
{
    Stack* stack;
    stack = (Stack *) (struct Stack*) malloc(sizeof(struct stack));
    stack->capacity = n;
    stack->size = n;
    stack->array = (int*) malloc(stack->capacity * sizeof(int));
    return stack;
}

/* Function that checks if the stack is full */
int isFull(Stack* stk)
{
    return stk->top == stk->capacity - 1;
}

/* Function that adds an element to the stack */
void push (int item, Stack * stk)
{
    if (isFull(stk))
        return;
    stk->array[stk->top++] = item;
    printf("%d pushed to stack\n", item);
}

/* Function that removes the top element from the stack */
int pop(Stack * stk)
{
    if (isEmpty(stk))
        return INT_MIN;
    return stk->array[stk->top--];
}

/* Function that sees what is on top of the stack without removing it */
int top(Stack * stk)
{
    if(stk && stk->top)
        return stk->top;
    return 0;
}

/* Function that checks if the stack is empty */
int isEmpty(Stack * stk)
{
    if (stk->top == 0)
        return 1;
    else
        return 0;
}

/*
 * Test main for the stack program.
 * Note that your instructor reserves the
 * right, and  probably will, test your code
 * using a different testStack.c
 *
 * Written by: Stuart Hansen
 * Date: February 9, 2017
 */
int main (int argc, char** argv) {
    int i;

    // Create a stack
    Stack * stk = init(3);

    // Test if the stack is empty
    if (isEmpty(stk))
        printf("The stack is empty\n");
    else
        printf("The stack is not empty\n");

    // Add some elements to the stack
    for (i=0;i<10; i++) {
        push(5, stk);
        push(3, stk);
        push(7, stk);
    }

    // Test if the stack is empty
    if (isEmpty(stk))
        printf("The stack is empty\n");
    else
        printf("The stack is not empty\n");

    // See what is on top of the stack
    printf("The top of the stack is: %d\n", top(stk));

    // Empty the stack, printing as we go
    while (!isEmpty(stk))
        printf("%d\n", pop(stk));
}