vector<int> postOrder(Node* node) {
    Node* curr = node;
    stack<Node*> st;
    vector<int> v;
    while(curr != NULL || !(st.empty())){
        if(curr != NULL){
            st.push(curr);
            curr = curr->left;
        }
        else{
            Node* temp = st.top()->right;
            if(temp == NULL){
                temp = st.top();
                st.pop();
                v.push_back(temp->data);
                while(!st.empty() && temp == st.top()->right){
                    temp = st.top();
                    st.pop();
                    v.push_back(temp->data);
                }
            }
            else
                curr = temp;
        }
    }
    return v;
}
