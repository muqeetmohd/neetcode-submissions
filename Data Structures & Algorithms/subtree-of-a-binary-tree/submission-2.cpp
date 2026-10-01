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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {

        if(!root && !subRoot) return true;


        if((root && subRoot) && (isSame(root, subRoot))) {
            return true;
        } else if((root && subRoot)){
            return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
        } else {
            return false;
        }

        if(root && subRoot) {
            return isSame(root->left, subRoot) || isSame(root->right, subRoot);
        }
        return false;    
    }

    bool isSame(TreeNode* p, TreeNode* q) {
        if(!p && !q) return true;

        if((p && q) && (p->val == q->val)){
            return isSame(p->left, q->left) && isSame(p->right, q->right);
        } else {
            return false;
        }

        return false;
    }


};
