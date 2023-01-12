
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int>mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
       return prein(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,mp);
        
        
        
    }
    TreeNode *prein(vector<int>&pre,int prest,int prend,vector<int>&in,int inst,int inend,map<int,int>&mp)
    {
        if(prest>prend||inst>inend)return NULL;
        TreeNode *root=new TreeNode(pre[prest]);
        int inroot=mp[root->val];
        int numsleft=inroot-inst;
        root->left=prein(pre,prest+1,prest+numsleft,in,inst,inroot-1,mp);
        root->right=prein(pre,prest+numsleft+1,prend,in,inroot+1,inend,mp);
        return root;
        
    }
};



