#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="abbca";
     int j=s.size()-1;
        int i=0;
        for(i=0;i<s.size();i++,j--){
           if(s[i]!=s[j]){
               break;
           }
            }
        vector<char> vec1;
        vector<char> vec2;
        for(int k=0;k<s.size();k++){
            if(k!=i){
            vec1.push_back(s[k]);
            vec2.push_back(s[k]);    
            }
           }
        reverse(vec1.begin(),vec1.end());
        if(vec1==vec2) cout<<"OKAY";

       vec1.clear();
       vec2.clear();
        
        for(int k=0;k<s.size();k++){
            if(k!=j){
            vec1.push_back(s[k]);
            vec2.push_back(s[k]);    
            }
}
        reverse(vec1.begin(),vec1.end());
        if(vec1==vec2) cout<<"Okay";

        
        for(int z=0;z<vec1.size();z++){
            cout<<vec1[z]<<" ";
        }

        cout<<"NOT OKAY";

    
}  


