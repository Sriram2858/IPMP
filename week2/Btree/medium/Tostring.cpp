string tree2str(TreeNode* root) {
        string str = "";
         check(root, str);
         return str;
    }
    void check(TreeNode* root, string &str) {
        if (root == NULL) {
            return;
        }
        str += to_string(root->val);
        if (root->left || root->right) {
            str += '(';
            check(root->left, str);
            str += ')';
        }
        if (root->right) {
            str += '(';
            check(root->right, str);
            str += ')';
        }
        
    }
    // string str;
    // string treeStr(TreeNode* root){
    //     if(root == NULL)
    //         return str;
    //     str = str + "(" + to_string(root->val);
    //     if(root->left == NULL && root->right)
    //         str = str + "(";
    //     else if(!root->left && !root->right){
    //         return str;
    //     }
    //     treeStr(root->left);
    //     str = str + ")";
    //     if(!root->right){
    //         return str;
    //     }
    //     treeStr(root->right);
    //     str = str + ")";
    //     return str;
    // }
    // string tree2str(TreeNode* root) {
    //     if(root == NULL) return str;
    //     str = to_string(root->val);
    //     if(root->left == NULL && root->right)
    //         str = str + "(";
    //     if(!root->left && !root->right){
    //         return str;
    //     }
    //     treeStr(root->left);
    //     str = str + ")";
    //     treeStr(root->right);
    //     if(root->right)str = str + ")";
    //     return str;
    // }
