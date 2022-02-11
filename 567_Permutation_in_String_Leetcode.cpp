class Solution {
public:
    bool checkInclusion(string s1, string s2) {
     
        vector<int> g;
        vector<int> per(26,0);
        vector<int> temp(26,0);
        
        int s1len = s1.size();
        int s2len = s2.size();
        
        if(s1len>s2len){
            return false;
        }
        
        //First Window:
        for(int i=0;i<s1len;i++){
            per[s1[i]-'a']++;
            temp[s2[i]-'a']++;
        }
        if(per == temp){
            return true;
        }
        for(int i=s1len;i<s2len;i++){
            temp[s2[i-s1len]-'a']--;
            temp[s2[i]-'a']++;
            
            if(temp==per){
                return true;
            }
        }
        return false;
    }
};