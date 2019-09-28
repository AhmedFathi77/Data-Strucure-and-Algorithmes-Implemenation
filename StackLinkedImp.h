#ifndef STACKLINKEDIMP_H_INCLUDED
#define STACKLINKEDIMP_H_INCLUDED

typedef int StackEntry;
typedef struct stacknode{
    StackEntry entry;
    struct stacknode* next;
}StackNode;

typedef struct stack_ds{
    StackNode* top;
}Stack;

void CreateStack(Stack *ps);
void Push(StackEntry e , Stack *ps);
void Pop(StackEntry *pe , Stack *ps);
int stackEmpty(Stack *ps);
int stackFull(Stack *ps);
void TraveseStack(Stack *ps , void(*pf)(StackEntry));
void stackTop(StackEntry *pe , Stack *ps);
int stackSize(Stack *ps);
#include "StackLinkedImp.c"

#endif // STACKLINKEDIMP_H_INCLUDED
