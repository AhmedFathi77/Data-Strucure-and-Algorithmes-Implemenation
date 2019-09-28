#ifndef __List_ArrImp__
#define __List_ArrImp__

    
    #define MAXLIST   100
    typedef int ListEntry;

    typedef struct list
    {   
        ListEntry entry[MAXLIST];
        int size;
    }ArrB_List;

    void CreateList_ArrB(ArrB_List *PL);
    int ListISEmpty_ArrB(ArrB_List *PL);
    int ListFull_ArrB(ArrB_List *PL);
    int ListSize_ArrB(ArrB_List *PL);
    void DistroyList_ArrB(ArrB_List *PL);
    void InsetList_ArrB(int pos , ListEntry e ,ArrB_List *PL);
    void DeleteList_ArrB(int pos , ListEntry *pe ,ArrB_List *PL);
    void RetrieveList_ArrB(int pos , ListEntry *pe ,ArrB_List *PL);
    void ReplaceList_ArrB(int pos , ListEntry e ,ArrB_List *PL);
    void TraverseList_ArrB(int pos , void (*pe)(ListEntry) ,ArrB_List *PL);
    #include"List_ArrImp.c"
#endif // __List_ArrImp__