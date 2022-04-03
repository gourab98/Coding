class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        for(int i=0;i<t.size();i++){
            mp[t[i]]++;
        }
        
        for(int i=0;i<s.size();i++){
            mp[s[i]]--;
        }
        
        for(auto n:mp){
            auto a = n.first;
            if(mp[a]<0){
                return false;
            }
        }
        
        unordered_map<char,int> mp1;
        for(int i=0;i<s.size();i++){
            mp1[s[i]]++;
        }
        
        for(int i=0;i<t.size();i++){
            mp1[t[i]]--;
        }
        
        for(auto n:mp1){
            auto a = n.first;
            if(mp1[a]<0){
                return false;
            }
        }
        
        return true;
    }
};