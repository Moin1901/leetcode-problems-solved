
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        rec(root,0,ans);
        return ans;
        
    }
    void rec(TreeNode *root,int level,vector<int>&ans){
        if(root==NULL)return;
        if(ans.size()==level)ans.push_back(root->val);
        rec(root->right,level+1,ans);
        rec(root->left,level+1,ans);
    }
};