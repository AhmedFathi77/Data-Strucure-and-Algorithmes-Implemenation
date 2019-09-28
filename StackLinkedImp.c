
void CreateStack(Stack *ps){
    ps->top = NULL;
}
void Push(StackEntry e , Stack *ps){
    StackNode *pn = (StackNode*)malloc(sizeof(StackNode));
    pn->entry     = e;
    pn->next      = ps->top;
    ps->top       = pn;
}
void Pop(StackEntry *pe , Stack *ps){
    StackNode *pn;
    *pe     = ps->top->entry;
    pn      = ps->top;
    ps->top = ps->top->next;
    free(pn);

}
int stackEmpty(Stack *ps){
    return ps->top == NULL;
}
int stackFull(Stack *ps){
    return 0;
}
void ClearStack(Stack *ps){
    StackNode *pn = ps->top;
    StackNode *qn = ps->top;
    while(pn){
        pn = pn->next;
        free(qn);
        qn = pn;
    }
    ps->top = NULL;
}
void TraveseStack(Stack *ps , void(*pf)(StackEntry)){
     StackNode *pn = ps->top;
     while(pn){
        (*pf)(pn->entry);
        pn = pn->next;
     }
}
void stackTop(StackEntry *pe , Stack *ps){
    *pe = ps->top->entry;
}
int stackSize(Stack *ps){
    int x;
    StackNode *pn = ps->top;
    for(x=0 ; pn ; pn=pn->next){
        x++;
    };
    return x;
}
