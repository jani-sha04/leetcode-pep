class Solution {
public:
    typedef TreeNode* tn;
    int ans;

    int helperDfs(tn nd) {
        if (!nd || (!nd->left && !nd->right)) {
            return 0;
        }

        int leftHt = helperDfs(nd->left);
        int rightHt = helperDfs(nd->right);

        int localRes = leftHt;

        if (nd->left != nullptr) {
            ++localRes;
        }
        localRes += rightHt;

        if (nd->right != nullptr) {
            ++localRes;
        }

        ans = max(ans, localRes);

        return max(leftHt, rightHt) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        ans = 0;
        helperDfs(root);

        return ans;            
    }
};