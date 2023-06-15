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
public:
    int maxLevelSum(TreeNode *root)
    {
        int levelSum = INT_MIN;
        int resultLevel = 0;

        queue<TreeNode *> temp;
        temp.push(root);

        int currentLevel = 1;

        while (!temp.empty())
        {
            int n = temp.size();
            int sum = 0;
            while (n--)
            {
                TreeNode *p = temp.front();
                temp.pop();

                sum += p->val;
                if (p->left)
                {
                    temp.push(p->left);
                }
                if (p->right)
                {
                    temp.push(p->right);
                }
            }
            if (sum > levelSum)
            {
                levelSum = sum;
                resultLevel = currentLevel;
            }
            currentLevel++;
        }
        return resultLevel;
    }
};