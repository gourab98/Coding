class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        int n = nums.size();

        int l = 0;
        int r = k-1;

        vector<int> vec;
        multiset<int, greater<int>> s;
        
        for(int i=0;i<k;i++){
            s.insert(nums[i]);
        }
        
        vec.push_back(*s.begin());
      
        for(int i=k;i<n;i++){
            s.erase(s.lower_bound(nums[i-k]));
            s.insert(nums[i]);
            vec.push_back(*s.begin());
        }
     
        return vec;    
    }
};