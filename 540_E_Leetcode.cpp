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
class Solution
{
    vector<int> vec;
    void inorder(TreeNode *root)
    {
        if (root == NULL)
            return;
        inorder(root->left);
        vec.push_back(root->val);
        inorder(root->right);
    }

public:
    int getMinimumDifference(TreeNode *root)
    {
        inorder(root);
        int a = INT_MAX;
        sort(vec.begin(), vec.end());
        for (int i = 0; i < vec.size() - 1; i++)
        {
            if (abs(vec[i] - vec[i + 1]) < a)
            {
                a = abs(vec[i] - vec[i + 1]);
            }
        }
        return a;
    }
};