class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
         
        int n = nums.size();
        int count = 0;
        
        sort(nums.begin(),nums.end());
        map<pair<int,int>,int> mp;
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(abs(nums[j]-nums[i]==k)){
                    pair<int,int> p ={nums[i],nums[j]};
                    if(mp.find(p)==mp.end()){
                        count++;
                        mp[p]=1;
                    }
                }
            }
        }
        
        return count;
    }
};