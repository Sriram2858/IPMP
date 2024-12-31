int getKthFromLast(Node *head, int k) {
    Node *fast = head;
    Node *slow = head;
    for(int i = 0; i < k; i++){
        if(fast == NULL){
            return -1;
        }
        fast = fast->next;
    }
    while(fast != NULL){
        fast = fast->next;
        slow = slow->next;
    }
    return slow->data;
}
