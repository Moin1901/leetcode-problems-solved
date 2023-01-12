
class Solution {
public:
    bool isValidBST(TreeNode* root) {
       return bst(root,LONG_MIN,LONG_MAX);
    }
    bool bst(TreeNode *root,long imin,long imax){
         if(root==NULL)return true;
        if(root->val>=imax||root->val<=imin)return false;
           return bst(root->left,imin,root->val)&&bst(root->right,root->val,imax);
        
        
    }
};

        
 