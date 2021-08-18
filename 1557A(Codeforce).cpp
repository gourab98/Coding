#include<bits/stdc++.h>
using namespace std;
int a[100008];

void solve(){

        int n;
        scanf("%d",&n);
        double total=0,p;

        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            total=a[i]+total;
        }
        sort(a,a+n);
        total=total-a[n-1];
        total=total/(n-1);
        p=total+a[n-1];
        printf("%.9f\n",p);

}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        solve();
    }
    return 0;
}
