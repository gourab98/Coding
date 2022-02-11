#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s1,s2;
   cin>>s1>>s2;

          map<char,int> mp1,mp2;
        for(int i=0;i<s1.size();i++){
            mp1[s1[i]]++;
        }
        for(int i=0;i<s1.size();i++){
            mp2[s2[i]]++;
        }
        if(mp1==mp2){
            return true;
        }
        
        for(int j=0,i=s1.size()-1;j<s2.size()-s1.size();j++){
            mp2[s2[j]]--;
            mp2[s2[i++]]++;
             for(auto z=mp2.begin();z!=mp2.end();z++){
        cout<<z->first<<" "<<z->second<<endl;
     }
     cout<<"Next: "<<endl;
            if(mp1==mp2){
            cout<<"true";
        } 
      }
        cout<<"false";

    for(auto i=mp1.begin();i!=mp1.end();i++){
        cout<<i->first<<" "<<i->second<<endl;
    }
}