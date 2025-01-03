TreeNode* invertTree(TreeNode* root) {
    if(!root) return root;
    TreeNode* temp = root->right;
    root->right = invertTree(root->left);
    root->left = invertTree(temp);
    return root;
}
