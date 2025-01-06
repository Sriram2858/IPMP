int sum = 0;
TreeNode* convertBST(TreeNode* root) {
    if(root == NULL) return root;
    convertBST(root->right);
    int temp = root->val;
    root->val += sum;
    sum += temp;
    convertBST(root->left);
    return root;
}
