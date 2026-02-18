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
    vector<int> ans;

    void dfsInorder(tn node){
        if(!node) return;

        dfsInorder(node->left);
        ans.push_back(node->val);
        dfsInorder(node->right);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        //vector<int> preorderTravelsal(TreeNode* root) {
            //vector<int> ans;
            dfsInorder(root);
            return ans;
        }
    
};