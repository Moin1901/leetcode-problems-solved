/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;;
        maxdo(root,maxi);
        return maxi;
    }
    int maxdo(TreeNode* root,int &maxi){
        if(root==NULL)return 0;
        int lhs=max(0,maxdo(root->left,maxi));
        int rhs=max(0,maxdo(root->right,maxi));
        maxi=max(maxi,lhs+rhs+root->val);
        return root->val+max(lhs,rhs);
    }
};