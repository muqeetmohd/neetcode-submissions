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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* res = nullptr;
        bool isP = false, isQ = false;
        helper(root, p, q, res, isP, isQ);
        return res;
    }

private:
    void helper(TreeNode* root, TreeNode* p, TreeNode* q, TreeNode*& res, bool& isP, bool& isQ) {
        if (!root) return;

        bool leftP = false, leftQ = false;
        bool rightP = false, rightQ = false;

        helper(root->left, p, q, res, leftP, leftQ);
        helper(root->right, p, q, res, rightP, rightQ);

        // Update current node’s state
        isP = leftP || rightP || root == p;
        isQ = leftQ || rightQ || root == q;

        // If both found in this subtree and res not set, current node is LCA
        if (isP && isQ && res == nullptr) {
            res = root;
        }
    }
};
