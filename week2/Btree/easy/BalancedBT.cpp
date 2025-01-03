bool ans;
int balance(TreeNode* root){
    if(!root) return 0;
    if(!ans) return 0;
    int lh = balance(root->left);
    int rh = balance(root->right);
    if(abs(lh - rh) > 1) ans = false;
    return 1 + max(lh, rh);
}
bool isBalanced(TreeNode* root) {
    ans = true;
    int temp = balance(root);
    return ans;
}
