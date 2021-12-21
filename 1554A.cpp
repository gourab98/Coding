#include<bits/stdc++.h>
using namespace std;
long long t,n,ans,a[100005];
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        ans=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n-1;i++){
            ans=max(ans,a[i]*a[i+1]);
        }
        cout<<ans<<endl;
    }
}
