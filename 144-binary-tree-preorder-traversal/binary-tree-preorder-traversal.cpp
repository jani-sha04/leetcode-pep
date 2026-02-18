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
    typedef TreeNode* tn;

    vector<int> preorderTraversal(TreeNode* root) {
        if(!root) return {};

        vector<int> ans;
        stack<tn> st;
        st.push(root);

        while (!st.empty()) {
            tn par = st.top();
            st.pop();
            ans.push_back(par->val);
            
            if(par->right){
                st.push(par->right);
            }

            if(par->left){
                st.push(par->left);
            }
        }

        return ans;
        
    }
};