//#include <stdio.h>
//#include "stack.h"
//
///*
// * Test main for the stack program.
// * Note that your instructor reserves the
// * right, and  probably will, test your code
// * using a different testStack.c
// *
// * Written by: Stuart Hansen
// * Date: February 9, 2017
// */
//int main (int argc, char** argv) {
//    int i;
//
//    // Create a stack
//    Stack * stk = init(3);
//
//    // Test if the stack is empty
//    if (isEmpty(stk))
//        printf("The stack is empty\n");
//    else
//        printf("The stack is not empty\n");
//
//    // Add some elements to the stack
//    for (i=0;i<10; i++) {
//        push(5, stk);
//        push(3, stk);
//        push(7, stk);
//    }
//
//    // Test if the stack is empty
//    if (isEmpty(stk))
//        printf("The stack is empty\n");
//    else
//        printf("The stack is not empty\n");
//
//    // See what is on top of the stack
//    printf("The top of the stack is: %d\n", top(stk));
//
//    // Empty the stack, printing as we go
//    while (!isEmpty(stk))
//        printf("%d\n", pop(stk));
//}
//
