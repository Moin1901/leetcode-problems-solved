
class BSTIterator {
public:
    stack<TreeNode*>st;
    BSTIterator(TreeNode* root) {
        pushall(root);    
    }
    void pushall(TreeNode *root ){
          while(root!=NULL){
            st.push(root);
            root=root->left;
        }
    
    }
    
    int next() {
            TreeNode *temp=st.top();
            st.pop();
            pushall(temp->right);
        return temp->val;
    }
    
    bool hasNext() {
        return !st.empty();
        
    }

};
