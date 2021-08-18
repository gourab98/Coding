#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h,m,sh,sm,ans;
    cin>>h>>m;
    h=(30*h)+(m/2);
    m=6*m;

    if(h>=360) h=(h-360);

    sh=min(abs(0-h),abs(360-h));
    sm=min(abs(0-m),abs(360-m));

    ans=min(sh+sm,abs(h-m));

//    cout<<h<<" "<<m<<endl;

    cout<<ans<<endl;

    return 0;
}
