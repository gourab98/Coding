class Solution {
public:
    
    void dfs(int num, int n, int k, vector<int> &ans){
        
        if(n==0) ans.push_back(num);
        else{
            int temp = num % 10;
            if(temp+k<=9) dfs( num*10 + temp+k, n-1, k, ans);
            if(k!=0 && temp >=k) dfs(num*10 + temp-k, n-1,k,ans);
        }
    }    
    
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> ans;
        for(int num=1;num<10;num++){
            dfs(num, n-1, k , ans);
        }
        return ans;
    }
};