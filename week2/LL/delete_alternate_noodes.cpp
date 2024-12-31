void deleteAlt(struct Node *head) {
    Node* temp = head;
    while(temp){
        if(temp->next == NULL)
            temp = NULL;
        else{
            temp->next = temp->next->next;
            temp = temp->next;
        }
    }
}
