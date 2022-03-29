class Solution {
public:
    int countOdds(int low, int high) {
        // int count = 0;
        // for(int i=low;i<=high;i++){
        //     if(i%2!=0){
        //         count++;
        //     }
        // }
        // return count;
        int ans;
        if(low%2!=0 || high%2!=0){
            ans = (high-low)/2 + 1;
        }
        else ans = (high-low)/2;
        
        return ans;
    }
};