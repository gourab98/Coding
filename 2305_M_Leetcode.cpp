class Solution {
public:
    int ans;
    void solve(vector<int>& cookies, int i, vector<int>& bags){
        int k=bags.size();
        if(i==cookies.size()){
            int mx = INT_MIN;
            for(int j=0;j<k;j++){
                mx = max(bags[j],mx);
            }
            ans = min(ans,mx);
            return;
        }
        for(int j=0;j<k;j++){
            bags[j]+=cookies[i];
            solve(cookies,i+1,bags);
            bags[j]-=cookies[i];
        }
    }
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int> bags(k,0);
        ans = INT_MAX;

        solve(cookies,0,bags);
        return ans; 

    }
};