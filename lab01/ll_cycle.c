#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    node *tortoise,*hare;
    tortoise=hare=head;
    while(hare!=NULL)
    {   if(hare->next==NULL)
            return 0;
        hare = hare->next->next;
        tortoise = tortoise->next;
        if(tortoise==hare)
            return 1;
    }
    return 0;

}