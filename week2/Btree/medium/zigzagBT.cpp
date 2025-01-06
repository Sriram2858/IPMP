vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    vector<vector<int>> ans;
    if(!root) return ans;
    queue<TreeNode*> q;
    int l = 0;
    q.push(root);
    while(!q.empty()){
        vector<int> level;
        int s = q.size();
        for(int i = 0; i < s; i++){
            TreeNode* temp = q.front();
            q.pop();
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
            if(l % 2 == 0) level.push_back(temp->val);
            else level.insert(level.begin(), temp->val);
        }
        l++;
        ans.push_back(level);
    }
    return ans;
}
