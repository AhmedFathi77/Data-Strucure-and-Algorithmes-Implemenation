#include <stdio.h>
#include <stdlib.h>
#include "List_LinkedImp.h"

int main(void){
    LinkedB_List li;

    CreateList_LinkedB(&li);
    InsetList_LinkedB(0,10,&li);
    InsetList_LinkedB(1,11,&li);
    InsetList_LinkedB(2,12,&li);
    InsetList_LinkedB(3,13,&li);
    InsetList_LinkedB(4,14,&li);
    InsetList_LinkedB(5,15,&li);
    InsetList_LinkedB(6,16,&li);
    InsetList_LinkedB(7,17,&li);
    InsetList_LinkedB(8,18,&li);
    InsetList_LinkedB(9,19,&li);
    ListEntry pe;
    DeleteList_LinkedB(3,&pe,&li);

    printf("We have just deleted : %d \n" , pe);
    int i;
    ListNode *p;
    for (p = li.head , i = 0; i < li.size; i++)
    {

       printf("%d \n" , p->entry);
       p = p->next;
    }
   
    
    
    return 0;
}