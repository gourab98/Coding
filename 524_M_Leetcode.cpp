class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
        string ans = "";
        for(int i=0;i<d.size();i++){
            int p = 0;
            for(int j=0;j<s.size();j++){
                if(s[j]==d[i][p]){
                    p++;
                }
            }
            if(p==d[i].size()){
                if(d[i].size()>ans.size()){
                    ans = d[i];
                }
                else if(d[i].size()==ans.size()){
                    ans = min(ans,d[i]);
                }
            }   
        }
       return ans;
    }
};