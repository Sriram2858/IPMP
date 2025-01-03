ListNode* deleteDuplicates(ListNode* head) {
    if(!head || !(head->next)) return head;
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode *first = dummy, *second =dummy->next;
    while(second && second->next){
        int flag = 0;
        while(second->next && first->next->val == second->next->val){
            second = second->next;
            flag = 1;
        }
        if(flag == 0){
            first = first->next;
            second = second->next;
        }
        else{
            first->next = second->next;
            second = second->next;
        }
    }
    return dummy->next;
}
