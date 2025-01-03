ListNode* rotateRight(ListNode* head, int k) {
    if(!head || !(head->next || k == 0)) return head;
    int len = 1;
    ListNode* temp = head;
    while(temp->next){
        len++;
        temp = temp->next;
    }
    k = k % len;
    if(k == 0) return head;
    ListNode *first = head, *second = head;
    for(int i = 0; i <= k; i++){
        first = first->next;
    }
    while(first){
        first = first->next;
        second = second->next;
    }
    ListNode *newHead = second->next;
    second->next = NULL;        
    temp->next = head;
    return newHead;
}
