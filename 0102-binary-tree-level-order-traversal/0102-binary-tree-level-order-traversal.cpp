
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(root==NULL)return ans;
            q.push(root);
        while(!q.empty()){
            vector<int>level;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode *t=q.front();
                q.pop();
                if(t->left!=NULL)q.push(t->left);
                if(t->right!=NULL)q.push(t->right);
                level.push_back(t->val);
            }
            ans.push_back(level);
        }
        return ans;
    }
};
