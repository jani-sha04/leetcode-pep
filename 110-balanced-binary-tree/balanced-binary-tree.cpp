class Solution {
public:
    int f(TreeNode* r){
        if(!r) return 0;
        int l=f(r->left), h=f(r->right);
        if(l==-1||h==-1||abs(l-h)>1) return -1;
        return 1+max(l,h);
    }
    bool isBalanced(TreeNode* root) {
        return f(root)!=-1;
    }
};