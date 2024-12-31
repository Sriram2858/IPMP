ListNode* middleNode(ListNode* head) {
    if(head == NULL || head->next == NULL) return head;
    ListNode* fast = head;
    ListNode* slow = head;
    while(fast && fast->next){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
