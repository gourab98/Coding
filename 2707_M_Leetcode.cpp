class Solution {
public:
    int n;
    unordered_set<string> st;
    
    int t[51];
    
    int solve(int idx, string & s){
        if(idx>=n){
            return 0;
        }
        if(t[idx]!=-1) return t[idx];
        string currStr = "";
        int minExtra = n;
        
        for(int i=idx;i<n;i++){
            
            currStr.push_back(s[i]);
            int currExt = (st.find(currStr)==st.end())? currStr.length():0;
            
            int nextExtra = solve(i+1,s);
            
            int totalExtra = currExt+ nextExtra;
            
            minExtra = min(minExtra, totalExtra);
        }
        return t[idx]=minExtra;
        
    }
        
    int minExtraChar(string s, vector<string>& dictionary) {
        n = s.length();
        
        memset(t,-1,sizeof(t));
        for(auto &dic: dictionary){
            st.insert(dic);
        }
        
        return solve(0,s);
        
    }
};