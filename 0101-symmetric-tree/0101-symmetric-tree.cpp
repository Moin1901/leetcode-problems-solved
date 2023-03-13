/**
class Solution {
public:
    bool is(TreeNode* left,TreeNode* right){
        if(left->val!=right->val)return false;
        return is(left->left, right->right)&&is(left->right,right->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)return true;
       return is(root->left,root->right);
        
    }
};

 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)return true;
        return issymm(root->left,root->right);
        
    }
    bool issymm(TreeNode *left,TreeNode *right){
        if(left==NULL ||right==NULL )return left==right;
        if(left->val!=right->val)return false;
        return issymm(left->left,right->right)&&issymm(left->right,right->left);
    }
};