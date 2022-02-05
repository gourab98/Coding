#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int test;
    cin>>test;
    long long int a,b,k;
    long long int div, mo;
    long long int ans;
    while(test--)
    {
        cin>>a>>b>>k;
        div = k/2;
        mo = k%2;
        ans = a*(div+mo) - b*div;
        cout<<ans<<endl;
    }
}