#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
     map<char,int> mp;
             for(int i=0;i<s.size();i++){
            mp[s[i]]--;
            cout<<mp[s[i]];
        }
        for(int i=97;i<=122;i++){
            mp[i]++;
            
        }

        for(int i=0;i<mp.size();i++){
            if(mp[i]<0){
                return false;
            }
        }
        return true;
}