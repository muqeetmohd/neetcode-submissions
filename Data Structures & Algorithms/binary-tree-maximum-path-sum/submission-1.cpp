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
    int maxPathSum(TreeNode* root) {

        int res = INT_MIN;
        solver(root, res);
        return res;
    }

    int solver(TreeNode* root, int &res) {
        if(!root) return 0;

        int left = solver(root->left, res);
        int right = solver(root->right, res);

        res = max({res, root->val, root->val + left, root->val+right, root->val+left+right});

        return max({root->val, root->val + left, root->val + right});
    }

};
