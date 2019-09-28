#ifndef STACKARRAYIMPLEM_H_INCLUDED
#define STACKARRAYIMPLEM_H_INCLUDED

#define MaxStack 10
typedef int StackEntry;
typedef struct stack_ds{
    int top;
    StackEntry entry[MaxStack];
}Stack;

void CreateStack(Stack *ps);
int Push(StackEntry e , Stack *ps);
int Pop(StackEntry *pe , Stack *ps);
int stackFull(Stack *ps);
int stackEmpty(Stack *ps);
void stackTop(StackEntry *pe , Stack *ps);
int stackSize(Stack *ps);
void ClearStack(Stack *ps);
void TraveseStack(Stack *ps , void(*pf)(StackEntry));
#include "StackArrayImplem.c"

#endif // STACKARRAYIMPLEM_H_INCLUDED
