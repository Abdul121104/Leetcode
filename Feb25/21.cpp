class FindElements {
public:
    unordered_set<int> v;
    FindElements(TreeNode* root) {
        root->val =0;
        solve(root);
    }

    void solve(TreeNode* root){
        
        if(!root) return;

        v.insert(root->val);
        
        
        if(root->left) {
            root->left->val = 2*(root->val)+1;
            solve(root->left);
        }

        if(root->right) {
            root->right->val = 2*(root->val)+2;          
            solve(root->right);
            
        }
    }
    
    bool find(int target) {
        return v.count(target);
    }
};
