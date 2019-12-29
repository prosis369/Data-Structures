/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

/*
Remove 'n'th node form the list. 
*/


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode* temp = head;
    if(temp != NULL)
    {
        int count = 0;
        int c = 0;
        int n_;
        while(temp->next != NULL)
        {
            temp = temp->next;
            count++;
        }
        count++;
        
        struct ListNode* curr = head;
        struct ListNode* prev = NULL;
        if(count == n)
        {
            head = curr->next;
            free(curr);
        }
        else
        {
            n_ = count-n;
            while(c != n_)
            {
                prev = curr;
                curr = curr->next;
                c++;
            }
            if(prev != NULL)
            {
                prev->next = curr->next;
                curr->next = NULL;
                free(curr);
            }
            else
            {
                free(curr);
                head = NULL;
            }
        }
        return(head);
    }
    return(head);
}

