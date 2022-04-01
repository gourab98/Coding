class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            return 0;
        }
        if(nums[i]<=-1){
            ans++;
        }
    }
        if(ans%2==0) return 1;
        else return -1;
        
    }
};