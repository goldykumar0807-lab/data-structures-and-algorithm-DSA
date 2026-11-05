class Solution {
public:
    int height(TreeNode* root){
        if(root==NULL) return 0;
        int lh=height(root->left);
        int rh=height(root->right);
        return 1+max(lh,rh);
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        if(abs(height(root->left)-height(root->right))>1) return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }
};
