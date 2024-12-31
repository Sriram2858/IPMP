Node* constructDLL(vector<int>& arr) {
    Node *head = new Node(arr[0]);
    Node *temp1 = head;
    for(int i = 1; i < arr.size(); i++){
        Node *temp2 = new Node(arr[i]);
        temp1->next = temp2;
        temp2->prev = temp1;
        temp1 = temp2;
    }
    return head;
}
