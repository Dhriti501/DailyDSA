//Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        struct Node *cur=head,*prev=NULL,*nxt=NULL;
        while(cur){
            nxt = cur->next;
            cur->next=prev;
            prev=cur;
            cur=nxt;
        }
        head = prev;
        
        return head;
    }