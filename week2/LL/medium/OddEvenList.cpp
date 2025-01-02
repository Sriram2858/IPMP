ListNode* oddEvenList(ListNode* head) {
    if(!head || !(head->next)|| !(head->next->next)) return head;
    ListNode *odd = head, *even = head->next, *newHead = head->next;
    while(even && even->next){
        odd->next = odd->next->next;
        odd = odd->next;
        even->next = even->next->next;
        even = even->next;
    }
    odd->next = newHead;
    return head;
}
