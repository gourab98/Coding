#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> str;
    string s;
    while(cin>>s && s!="#")
    {
        str.push_back(s);
    }
    string p="";
    string ans=str[0];
    for(int i=0;i<str.size();i++)
    {
        for(int j=0;j<ans.size();j++){
            if(str[i][j]==ans[j])
            {
                p=p+str[i][j];
                
                
            }
            if(str[i][j]!=ans[j] || ((str[i][j]==ans[j])&& j==ans.size()-1)) 
            {
                ans = p;
                p="";
                break;
            }
        }
    }
    cout<<p<<endl;
}