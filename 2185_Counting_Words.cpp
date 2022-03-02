class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        for(auto str:words){
            int index = str.find(pref);
            if(index==0){
                count++;
            }
        }
        return count;
    }
};