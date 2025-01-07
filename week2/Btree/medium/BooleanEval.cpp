bool evaluateTree(TreeNode* root) {
    if(!root) return true;
    if(!root->left && !root->right) return root->val;
    bool lv = evaluateTree(root->left);
    bool rv = evaluateTree(root->right);
    return (root->val == 2)?(lv || rv):(lv && rv);
}
