class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root->left == NULL && root->right == NULL) return root;
        TreeNode* temp;
        if((p->val <= root->val && q->val >= root->val) || (q->val <= root->val && p->val >= root->val))
            return root;
        if(p->val <= root->val && q->val <= root->val){
            temp = lowestCommonAncestor(root->left, p, q);
        }
        if(p->val >= root->val && q->val >= root->val){
            temp = lowestCommonAncestor(root->right, p, q);
        }
        return temp;
    }
};
