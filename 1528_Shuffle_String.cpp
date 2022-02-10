class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
       string ans=s;
        int i=0;
        for(auto num:indices){
            ans[num] =s[i++];
        }
        return ans;
    }
};