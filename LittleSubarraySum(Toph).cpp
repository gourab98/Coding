#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;

    unsigned long long int sum=0;

    cin>>n>>a>>b;

    int ab [1010];
    for(int i=0;i<n;i++){
        cin>>ab[i];
    }

    for(int i=a;i<=b;i++){
        sum=sum+ab[i];
    }
    cout<<sum;

    return 0;
}
