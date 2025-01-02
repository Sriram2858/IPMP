ListNode* reverseLL(ListNode* head){
    ListNode *prev = NULL, *curr = head, *next;
    while(curr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
int pairSum(ListNode* head) {
    ListNode *fast = head, *slow = head;
    while(fast->next && fast->next->next){
        fast = fast->next->next;
        slow = slow->next;
    }
    ListNode *newHead = reverseLL(slow->next);
    int max = 0;
    ListNode* first = head;
    ListNode* second = newHead;
    while(second){
        int sum = first->val + second->val;
        if(sum > max)
            max = sum;
        first = first->next;
        second = second->next;
    }
    reverseLL(newHead);
    return max;
}
