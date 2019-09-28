void CreateStack(Stack *ps){
    ps->top = 0;
}
int Push(StackEntry e , Stack *ps){
    if(ps->top == MaxStack)
        return 0;
    else{
        ps->entry[ps->top++] = e;
        return 1;
    }

}
int Pop(StackEntry *pe , Stack *ps){
    if(ps->top=0)
        return 0;
    else{
       // ps->top--;
       // *pe = ps->entry[ps->top];
       *pe = ps->entry[--ps->top];
    }
}
int stackFull(Stack *ps){
    if(ps->top == MaxStack)
        return 1;
    else
        return 0;
}
int stackEmpty(Stack *ps){
    if(ps->top == 0)
            return 1;
        else
            return 0;
}
void stackTop(StackEntry *pe , Stack *ps){
    *pe = ps->entry[ps->top-1];
}
int stackSize(Stack *ps){
    return ps->top;
}
void ClearStack(Stack *ps){
    ps->top = 0;
}
void TraveseStack(Stack *ps , void(*pf)(StackEntry)){
    int i ;
    for(i = ps->top ; i>0 ; i--)
        (*pf) (ps->entry[i-1]);
}
