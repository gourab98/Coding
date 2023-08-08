class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        int mid;
        
        while(l<r){
            mid = (l+r)/2;
            if(nums[mid]>nums[r]){
                l = mid+1;
            }
            else{
                r = mid;
            }
        }
        
        mid = r;
        
        l = 0;
        r = mid-1;
        
        while(l<=r){
            int mid1 = (l+r)/2;
            if(nums[mid1]==target) return mid1;
            else if(nums[mid1]>target) r = mid1-1;
            else l = mid1+1;
        }
        
        l = mid;
        r = nums.size()-1;
        
        while(l<=r){
            int mid1 = (l+r)/2;
            if(nums[mid1]==target) return mid1;
            else if(nums[mid1]>target) r = mid1-1;
            else l = mid1+1;
        }
        
        return -1;
    }
};