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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        int currentLevel = 1;
        vector<long long> vec;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            long long sum=0;
            while(n--){
                TreeNode* temp = q.front();
                q.pop();
                sum+=temp->val;
                if(temp->left) {
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            vec.push_back(sum);
            currentLevel++;
        }
        sort(vec.begin(),vec.end(),greater<long long>());
        int p = vec.size()-1;
        k--;
        if(k>p) return -1;
        else{
            return vec[k];
        }
    }
};