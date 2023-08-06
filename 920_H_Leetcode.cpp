class Solution {
public:
    int N,GOAL,K;
    int t[101][101];
    const int MOD = 1e9+7;
    long solve(int count_song, int count_unique){
            if(count_song==GOAL){
                if(count_unique==N){
                    return 1;
                }
                return 0;
            }
        if(t[count_song][count_unique]!=-1){
            return t[count_song][count_unique];
        }
        long result = 0; 
        // Option-1 (Play Unique Song)
        if(N> count_unique)
            result += (N-count_unique)*solve(count_song+1, count_unique+1);
        // Option-2 (Replay song and keep track of K)
        if(count_unique > K)
            result += (count_unique-K)*solve(count_song+1,count_unique);
        
        return t[count_song][count_unique] = result % MOD;
        
    }
    int numMusicPlaylists(int n, int goal, int k) {
        memset(t,-1,sizeof(t));
        N = n;
        GOAL = goal;
        K = k;
        return solve(0,0);
    }
};