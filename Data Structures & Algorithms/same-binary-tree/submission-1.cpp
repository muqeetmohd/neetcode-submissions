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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool res = true;
        helper(p, q, res);
        return res;
    }

    void helper(TreeNode* p, TreeNode* q, bool &res) {
        if(!p && !q) return;
        if((p && q) && p->val == q->val) {
            helper(p->left, q->left, res);
            helper(p->right, q->right, res);
        } else {
            // cout<<"p->left :"<<p->left<<"p->right: "<<p->right;
            res = false;
        }
        return;
    }
};
