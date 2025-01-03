ListNode* partition(ListNode* head, int x) {
    if(!head || !(head->next)) return head;
    ListNode *firsthead = new ListNode(0), *secondhead = new ListNode(0);
    ListNode *first = firsthead, *second = secondhead;
    ListNode *temp = head;
    while(temp){
        if(temp->val >= x){
            second->next = temp;
            second = temp;
        }
        else{
            first->next = temp;
            first =  temp;
        }
        temp = temp->next;
    }
    second->next = NULL;
    first->next = secondhead->next;
    return firsthead->next;
}
