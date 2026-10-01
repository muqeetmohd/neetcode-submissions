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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        int idx = 0;
        unordered_map<int, int> mpp;
        int s = preorder.size();

        for(int i = 0; i < s; i++) {
            mpp[inorder[i]] = i;
        }

        return solver(preorder, inorder, 0, s-1, idx, mpp);
        
    }

    TreeNode* solver(vector<int>& preorder, vector<int>& inorder, int start, int end, int &idx, unordered_map<int, int> &mpp) {

        if(start > end) return nullptr; 

        TreeNode* root = new TreeNode(preorder[idx]);

        int i = mpp[root->val];
        idx++;

        root->left = solver(preorder, inorder, start, i-1, idx, mpp);
        root->right = solver(preorder, inorder, i+1, end, idx, mpp);

        return root;

    }


};
