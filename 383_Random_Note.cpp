class Solution {
public:
    bool canConstruct(string s1, string s2) {
          
        unordered_map<char,int> mp;
        
        
        for(int i=0;i<s2.size();i++){
            mp[s2[i]]++;
        }
        
        for(int i=0;i<s1.size();i++){
            mp[s1[i]]--;
        }
        for(auto it:mp){
            auto a=it.first;
            if(mp[a]<0){
                return false;
            }
        }
        // for(int i=0;i<mp.size();i++){
        //     if(mp[i]<0){
        //         return false;
        //     }
        // }
        return true;
        
        
    }
};