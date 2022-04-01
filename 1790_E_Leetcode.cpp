class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
      int count = 0;
      int k = 0;
      char t1,t2;
      for(int i=0;i<s1.size();i++){
          if(s1[i]!=s2[i]){
              count++;
              if(count==1){
                  t1 = s1[i];
                  t2 = s2[i];
              }
          }
          if(count == 2 && t1==s2[i] && t2==s1[i]){
              k++;
          }
      }
        if(count==0) return true;
        if(count==2 && k==1) return true;
        return false;
    }
};