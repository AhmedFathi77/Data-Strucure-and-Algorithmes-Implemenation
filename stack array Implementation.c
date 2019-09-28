#include "StackArrayImplem.h"
void CreateStack(Stack *ps){
    ps->top = 0;
}
int Push(StackEntry e , Stack *ps){
    if(ps->top == MaxStack)
        return 0;
    else{
        ps->entry[ps->top++] = e;
        return 1
    }

}
