ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    if (!l1) return l2;
    if (!l2) return l1;
    ListNode* t1 = l1;
    ListNode* t2 = l2;
    int carry = 0;
    int sum = (carry + t1->val + t2->val) % 10;
    carry = (carry + t1->val + t2->val)/10;
    
    ListNode* r = new ListNode(sum);
    ListNode* t3 = r;
    
    t1 = t1->next;
    t2 = t2->next;
    
    while(t1 && t2){
        sum = (carry + t1->val + t2->val) % 10;
        carry = (carry + t1->val + t2->val)/10;
        ListNode* temp = new ListNode(sum);
        t1 = t1->next;
        t2 = t2->next;
        t3->next = temp;
        t3 = temp;
    }
    
    while(t1){
        sum = (carry + t1->val) % 10;
        carry = (carry + t1->val)/10;
        ListNode* temp = new ListNode(sum);
        t3->next = temp;
        t3 = temp;
        t1 = t1->next;
    }
    
    while(t2){
        sum = (carry + t2->val) % 10;
        carry = (carry + t2->val)/10;
        ListNode* temp = new ListNode(sum);
        t3->next = temp;
        t3 = temp;
        t2 = t2->next;
    }
    
    if(carry == 1){
        ListNode* temp = new ListNode(1);
        t3->next = temp;
        t3 = temp;
    }
    return r;
}
