class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        int n =nums.size();
        deque <int> dec;
        vector<int> result;
        
        for(int i=0;i<n;i++){
            
            while(!dec.empty() && dec.front() <=i-k){
                dec.pop_front();
            }
            while(!dec.empty() && nums[i]> nums[dec.back()]){
                dec.pop_back();
            }
            dec.push_back(i);
            
            if(i>=k-1){
                result.push_back(nums[dec.front()]);
            }
            
        }
        return result;
        
    }
};