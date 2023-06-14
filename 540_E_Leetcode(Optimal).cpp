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
    int smallDiff= INT_MAX;
    void inorder(TreeNode* root, TreeNode* &prev){
        if(!root) return;
        inorder(root->left,prev);
        if(prev!=NULL){
            smallDiff=min(smallDiff,(root->val - prev->val));
        }
        prev = root;
        inorder(root->right,prev);
    }

public:
    int getMinimumDifference(TreeNode* root) {
        TreeNode* prev=NULL;
        inorder(root, prev);
        return smallDiff;
    }
};