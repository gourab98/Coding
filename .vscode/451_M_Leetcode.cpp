class Solution {
public:
    string frequencySort(string s) {

        map<char,int> smap;
                
        for(int i=0;i<s.size();i++){
            smap[s[i]]++;
        }
        vector<pair<char,int>> v;
        for(auto i: smap){
            v.push_back(i);
        }
        sort(v.begin(),v.end(),[](pair<char,int> a, pair<char,int> b){ 
            return a.second>b.second;
        });
        int cou = 0;
        for(auto i:v){
          int loop = i.second;
          while(loop){
            s[cou]= i.first;
            cou++;
            loop--;
          }
            
    }

        return s;
    }
};