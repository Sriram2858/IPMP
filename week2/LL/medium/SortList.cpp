ListNode* findMiddle(ListNode* head){
    ListNode *fast = head, *slow = head;
    while(fast->next && fast->next->next){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
ListNode* mergeTwoLists(ListNode* left, ListNode* right){
    ListNode* dummy = new ListNode(0);
    ListNode* temp = dummy;
    while(left && right){
        if(left->val < right->val){
            temp->next = left;
            temp = temp->next;
            left = left->next;
        }
        else{
            temp->next = right;
            temp = temp->next;
            right = right->next;
        }
    }
    if(left) temp->next = left;
    else temp->next = right;

    return dummy->next;
}
ListNode* sortList(ListNode* head) {
    if(!head || !(head->next)) return head;
    ListNode* mid = findMiddle(head);
    ListNode* right = mid->next;
    mid->next = NULL;
    ListNode* left = head;
    left = sortList(left);
    right = sortList(right);
    return mergeTwoLists(left, right);
}
