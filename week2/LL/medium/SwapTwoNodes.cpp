ListNode* swapPairs(ListNode* head) {
    if(!head || !(head->next)) return head;
    ListNode *newhead = head->next, *prev = new ListNode(0);
    prev->next = head;
    ListNode *curr = head;
    while(curr && curr->next){
        ListNode* temp = curr->next;
        prev->next = temp;
        curr->next = temp->next;
        temp->next = curr;
        prev = curr;
        curr = curr->next;
    }
    return newhead;
}
