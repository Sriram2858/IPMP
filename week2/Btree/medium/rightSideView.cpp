vector<int> rightSideView(TreeNode* root) {
    vector<int> ans;
    if(!(root)) return ans;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        int view;
        int s = q.size();
        for(int i = 0; i < s; i++){
            TreeNode* temp = q.front();
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
            view = temp->val;
            q.pop();
        }
        ans.push_back(view);
    }
    return ans;
}
