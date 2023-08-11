class Solution {
public:
    int t[301][5001];
    int solve(int start, int amount, vector<int>& coins){
        if(amount==0){
            return 1;
        }
        if(start==coins.size() || amount<0){
            return 0;
        }
        if(t[start][amount]!=-1){
            return t[start][amount];
        }
        if(coins[start]>amount){
            return t[start][amount] = solve(start+1,amount, coins);
        }
        int take = solve(start,amount-coins[start],coins);
        int skip = solve(start+1,amount,coins);
        
        return t[start][amount]=take+skip;
        
    }
    
    int change(int amount, vector<int>& coins) {
        memset(t,-1,sizeof(t));
        return solve(0,amount,coins);
    }
};