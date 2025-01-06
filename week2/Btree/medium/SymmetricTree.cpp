bool isSym(TreeNode* left, TreeNode* right){
        if(left == NULL || right == NULL)
            return left == right;
        if(left->val != right->val)
            return false;
        return isSym(left->left, right->right) && isSym(left->right, right->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(!(root)) return true;
        return isSym(root->left, root->right);
    }
