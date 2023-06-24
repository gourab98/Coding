class Solution {
public:
    int n;
    int t[21][10003];
    int solve (vector<int>& rods, int idx, int dif){
        if(idx>=n){
            if(dif==0){
                return 0;
            }
            return INT_MIN;
        }
        if(t[idx][dif+5000]!=-1){
            return t[idx][dif+5000];
        }
        int nothing = solve(rods, idx+1, dif);
        int addl1 = rods[idx] + solve(rods,idx+1,dif+rods[idx]);
        int addl2 = rods[idx] + solve(rods,idx+1,dif - rods[idx]);

        return t[idx][dif+5000] = max({nothing, addl1, addl2});
    }
    int tallestBillboard(vector<int>& rods) {
        n = rods.size();
        memset(t,-1, sizeof(t));
        return solve(rods,0,0)/2;
    }
};