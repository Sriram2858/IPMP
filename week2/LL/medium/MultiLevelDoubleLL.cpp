Node* flattenChild(Node* head){
    Node* curr = head, *tail = head;
    while(curr){
        Node* child = curr->child;
        Node* next = curr->next;
        if(child){
            Node* cTail = flattenChild(child);
            cTail->next = next;
            if(next) next->prev = cTail;
            curr->next = child;
            child->prev = curr;
            curr->child = NULL;
            curr = cTail; 
        }
        else
            curr = next;
        if(curr)
            tail = curr;
    }
    return tail;
}
Node* flatten(Node* head) {
    if(head) flattenChild(head);
    return head;
}
