class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        DLLNode *prev = NULL, *curr = head, *next;
        while(curr){
            next = curr->next;
            curr->next = prev;
            curr->prev = next;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};
