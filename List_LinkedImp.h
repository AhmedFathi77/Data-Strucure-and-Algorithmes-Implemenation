#ifndef __List_LinkedImp__
#define __List_LinkedImp__

    
    
    typedef int ListEntry;
    typedef struct listnode
    {
        ListEntry entry;
        struct listnode *next;
       
    }ListNode;
    
    typedef struct list
    {   
        ListNode *head;
        int size;
    }LinkedB_List;

    void CreateList_LinkedB(LinkedB_List *PL);
    int ListISEmpty_LinkedB(LinkedB_List *PL);
    int ListFull_LinkedB(LinkedB_List *PL);
    int ListSize_LinkedB(LinkedB_List *PL);
    void DistroyList_LinkedB(LinkedB_List *PL);
    void InsetList_LinkedB(int pos , ListEntry e ,LinkedB_List *PL);
    void DeleteList_LinkedB(int pos , ListEntry *pe ,LinkedB_List *PL);
    void RetrieveList_LinkedB(int pos , ListEntry *pe ,LinkedB_List *PL);
    void ReplaceList_LinkedB(int pos , ListEntry e ,LinkedB_List *PL);
    void TraverseList_LinkedB(int pos , void (*pe)(ListEntry) ,LinkedB_List *PL);
    #include"List_LinkedImp.c"
#endif // __List_LinkedImp__