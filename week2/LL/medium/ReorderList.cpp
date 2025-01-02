ListNode* reverseLL(ListNode* head){
    ListNode *prev = NULL, *curr = head, *next;
    while(curr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
void reorderList(ListNode* head) {
    ListNode *fast = head, *slow = head;
    while(fast->next && fast->next->next){
        fast = fast->next->next;
        slow= slow->next;
    }
    ListNode *newHead = reverseLL(slow->next);
    ListNode *first = head, *second = newHead;
    while(first && second){
        ListNode* temp = second->next;
        second->next = first->next;
        first->next = second;
        first = first->next->next;
        second = temp;
    }
    if(first){
        first->next = NULL;
    }
}
