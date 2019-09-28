#include "List_LinkedImp.h"

void CreateList_LinkedB(LinkedB_List *PL){
    PL->head = NULL;
    PL->size = 0;
}
int ListISEmpty_LinkedB(LinkedB_List *PL){
    return !PL->size;
}
int ListFull_LinkedB(LinkedB_List *PL){
    return 0;
}
int ListSize_LinkedB(LinkedB_List *PL){
    return PL->size;
}
void DistroyList_LinkedB(LinkedB_List *PL){
    ListNode* p;
    while (PL->head)
    {
        p = PL->head->next;
        free(PL->head);
        PL->head = p;
    }
    PL->size = 0;
}
void InsetList_LinkedB(int pos , ListEntry e ,LinkedB_List *PL){
    ListNode *p ,*pq;
    int i;
    p = (ListNode*)malloc(sizeof(ListNode));
    p->entry = e;
    p->next = NULL;
    if(pos == 0){
        p->next = PL->head;
        PL->head = p;
    }
    else{
        for (pq = PL->head ,i = 0; i < pos-1; i++)
        {
            pq = pq->next;
        }
        p->next = pq->next;
        pq->next = p;
        
    }
    PL->size++;
}
void DeleteList_LinkedB(int pos , ListEntry *pe ,LinkedB_List *PL){
    ListNode *p ,*temp;
    int i;

    if(pos == 0){
        temp = PL->head->next;
        *pe = PL->head->entry;
        free(PL->head);
        PL->head = temp;

    }else{
       for (p = PL->head ,i = 0; i < pos-1; i++)
        {
            p = p->next;
        }
        temp = p->next->next;
        *pe = p->next->entry;
        free(p->next);
        p->next = temp;
    }   
    PL->size--; 
}
void RetrieveList_LinkedB(int pos , ListEntry *pe ,LinkedB_List *PL){
    ListNode *p;
    int i;
    for (p = PL->head ,i = 0; i < pos; i++)
    {
        p = p->next;
    }
    *pe = p->entry;
}
void ReplaceList_LinkedB(int pos , ListEntry e ,LinkedB_List *PL){
    ListNode *p;
    int i;
    for (p = PL->head ,i = 0; i < pos; i++)
    {
        p = p->next;
    }
    p->entry = e;
}
void TraverseList_LinkedB(int pos , void (*pe)(ListEntry) ,LinkedB_List *PL){
    int i ;
    ListNode *p;
    for (p = PL->head , i = 0; i < PL->size; i++)
    {

       (*pe)(p->entry);
       p = p->next;
    }
}