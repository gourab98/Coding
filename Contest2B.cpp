#include<bits/stdc++.h>
using namespace std;
const string subseqs[]={"00","25","50","75"};
const int INF =100;

int solve(string s, string t)
{
   return s;
}

int main()
{
    int t=0;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        int ans = INF;
        for(auto e: subseqs)
            ans = min(ans, solve(n,e));

        cout<< ans<<endl;
    }
}
