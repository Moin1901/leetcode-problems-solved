class Solution {
public:
    int ans;
    
    int kthSmallest(TreeNode* root, int k) {
        inorder(root, k);
        return ans;
    }
    
    void inorder(TreeNode* root, int& k) {
        if (root==NULL) return;
        inorder(root->left, k);
        if (--k == 0){
            ans = root->val;
        } 
        inorder(root->right, k);
    }  
};