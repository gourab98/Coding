class Solution {
public:
    int n;
    int t[2000][2000];
    unordered_map<int,int> mp;
    
    bool solve(vector<int>& stones, int curr_stone_idx, int k){
        if(curr_stone_idx==n-1){
            return true;
        }
        bool result= false;
        
        if(t[curr_stone_idx][k]!=-1){
            return t[curr_stone_idx][k];
        }
        
        for(int next_jump = k-1; next_jump<=k+1; next_jump++){
            if(next_jump>0){
                int next_stone = stones[curr_stone_idx]+next_jump;
            
                if(mp.find(next_stone)!=mp.end()){
                    result = result || solve(stones, mp[next_stone],next_jump);
                }
            }
        }
        return t[curr_stone_idx][k] = result;
    }
    
    bool canCross(vector<int>& stones) {
        n = stones.size();
        if(stones[1]!=1) return false;
        
        memset(t,-1,sizeof(t));
        for(int i=0;i<n;i++){
            mp[stones[i]]=i;
        }
        
        return solve(stones, 0, 0);
    }
};