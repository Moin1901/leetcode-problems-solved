
class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
         map<int,int>mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
       return postin(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,mp);
        
    }
     TreeNode *postin(vector<int>&in,int inst,int inend,vector<int>&post,int postst,int postend,map<int,int>&mp)
    {
        if(postst>postend||inst>inend)return NULL;
        TreeNode *root=new TreeNode(post[postend]);
        int inroot=mp[root->val];
        int numsleft=inroot-inst;
        root->left=postin(in,inst,inroot-1,post,postst,postst+numsleft-1,mp);
        root->right=postin(in,inroot+1,inend,post,postst+numsleft,postend-1,mp);
        return root;
        
    }
};


   