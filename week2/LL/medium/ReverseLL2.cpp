ListNode* reverseBetween(ListNode* head, int left, int right) {
    ListNode *dummy = new ListNode(0);
    dummy->next = head;
    ListNode *L = dummy;
    if(head == NULL || head->next == NULL || right == left) return head;
    for(int i = 0; i < left - 1; i++){
        L = L->next;
    }
    ListNode *prev = NULL, *curr = L->next, *next;
    for(int i = 0; i < right - left + 1; i++){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    L->next->next = curr;
    L->next = prev;
    ListNode* newHead = dummy->next;
    delete(dummy);
    return newHead;
}
