int diameter(TreeNode* root, int& d){
    if(!root) return 0;
    int lh = diameter(root->left, d);
    int rh = diameter(root->right, d);
    d = max(d, lh + rh);
    return 1 + max(lh, rh);
}
int diameterOfBinaryTree(TreeNode* root) {
    int d = 0;
    diameter(root, d);
    return d;
}
