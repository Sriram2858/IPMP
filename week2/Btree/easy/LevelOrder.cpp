vector<vector<int>> levelOrder(TreeNode* root) {
    if(!root) return {};
    queue<TreeNode*> q;
    TreeNode* temp = root;
    vector<vector<int>> v;
    q.push(root);
    while(!q.empty()){
        vector<int> level;
        int s = q.size();

        for(int i = 0; i < s; i++){
            if(q.front()->left)
                q.push(q.front()->left);
            if(q.front()->right)
                q.push(q.front()->right);
            level.push_back(q.front()->val);
            q.pop();
        }
        v.push_back(level);
    }
    return v;
}
