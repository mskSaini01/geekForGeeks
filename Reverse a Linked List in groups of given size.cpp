class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        node *prev = NULL;
        node *forward = NULL;
        node *curr = head;
        int count = 0;
        while (curr != NULL && count < k) {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            count++;
        }
        if(forward != NULL)
            head->next = reverse(forward, k);
        return prev;
    }
};