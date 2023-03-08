/*
struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
*/
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        if(head == NULL)
            return false;
        struct Node *fast = head;
        struct Node *slow = head;
         while(fast!=NULL && fast->next!=NULL){
            fast = fast->next;
            if(fast->next!=NULL)
                fast = fast->next;
            
            slow=slow->next;
            
            if(fast==slow)
                return true;
         }
         return false;
    }
};