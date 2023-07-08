class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        int n= weights.size();
        int m= n-1;
        vector<int> vec(m,0);
        for(int i=0;i<m;i++){
            vec[i]=weights[i]+weights[i+1];
            
        }
        sort(vec.begin(),vec.end());
        long minSum=0;
        long maxSum=0;
        for(int i=0;i<k-1;i++){
            minSum+=vec[i];
            maxSum+=vec[m-1-i];
            }

        return maxSum-minSum;
    }
};