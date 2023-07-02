class Solution {
public:
    int ans=0;
    void solve(vector<vector<int>>& requests, vector<int>& vec, int n, int index, int count){
        if(index==requests.size()){
            for(int i=0;i<n;i++){
                if(vec[i]) return;
            }
            ans = max(ans,count);
            return;
        }
        vec[requests[index][0]]--;
        vec[requests[index][1]]++;
        solve(requests,vec,n,index+1,count+1);
        vec[requests[index][0]]++;
        vec[requests[index][1]]--;
        solve(requests,vec,n,index+1,count);
    }
    int maximumRequests(int n, vector<vector<int>>& requests) {
        vector<int> vec(n,0);
        solve(requests,vec,n,0,0);
        return ans;
    }
};