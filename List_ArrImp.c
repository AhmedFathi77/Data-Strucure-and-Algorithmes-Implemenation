#include "List_ArrImp.h"

void CreateList_ArrB(ArrB_List *PL){
    PL->size = 0;
}
int ListISEmpty_ArrB(ArrB_List *PL){
    return !PL->size;
}
int ListFull_ArrB(ArrB_List *PL){
    return PL->size == MAXLIST;
}
int ListSize_ArrB(ArrB_List *PL){
    return PL->size;
}
void DistroyList_ArrB(ArrB_List *PL){
    PL->size = 0;
}
void InsetList_ArrB(int pos , ListEntry e ,ArrB_List *PL){
    int i;
    for (i = PL->size -1 ; i >= pos ; i--)
    {
       PL->entry[i+1] = PL->entry[i];
    }
    PL->entry[pos] = e;
    PL->size++;
}
void DeleteList_ArrB(int pos , ListEntry *pe ,ArrB_List *PL){
    int i;
    *pe = PL->entry[pos];
    for (i = pos+1; i <= PL->size -1 ; i++)
    {
       PL->entry[i-1] = PL->entry[i];
    }
    PL->size--;
}
void RetrieveList_ArrB(int pos , ListEntry *pe ,ArrB_List *PL){
    *pe = PL->entry[pos];
}
void ReplaceList_ArrB(int pos , ListEntry e ,ArrB_List *PL){
    PL->entry[pos] = e;
}
void TraverseList_ArrB(int pos , void (*pe)(ListEntry) ,ArrB_List *PL){
    int i ;
    for (i = 0; i < PL->size; i++)
    {
       (*pe)(PL->entry[i]);
    }
}