ListNode* deleteDuplicates(ListNode* head) {
    ListNode* temp1 = head;
    if(head == NULL || head->next == NULL) return head;
    ListNode* temp2 = head->next;
    while(temp2->next != NULL){
        if(temp1->val != temp2->val){
            temp1->next = temp2;
            temp1 = temp2;
        }
        temp2 = temp2->next;
    }
    if(temp1->val != temp2->val){
        temp1->next = temp2;
        temp1 = temp2;
    }
    temp1->next = NULL;
    return head;
}
