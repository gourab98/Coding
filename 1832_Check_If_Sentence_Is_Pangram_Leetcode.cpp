class Solution {
public:
    bool checkIfPangram(string sentence) {
        map<char,int> mp;
        for(int i=0;i<sentence.size();i++){
            mp[sentence[i]]++;
        }
        for(int i=97;i<=122;i++){
            mp[i]--;
        }

        for(int i=0;i<mp.size();i++){
            if(mp[i]<0){
                return false;
            }
        }
        return true;
    }
};