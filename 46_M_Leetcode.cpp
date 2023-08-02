class Solution {
vector<vector<int>> ans;
public:
    void solve(vector<int>& nums, vector<int> temp, int idx){
        if(idx==nums.size()){
            ans.push_back(temp);
            return;
        }
        for(int i = idx;i<nums.size();i++){
            temp.push_back(nums[i]);
            swap(nums[i],nums[idx]);
            solve(nums, temp, idx+1);
            temp.pop_back();
            swap(nums[i], nums[idx]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp;
        solve(nums, temp, 0);
        return ans;
    }
};