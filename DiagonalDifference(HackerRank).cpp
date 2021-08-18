#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000][1000];
    int t,pri=0,sec=0,tra,pru=1,l=0;
    cin>>t;
    tra=t;
    for(int i=1;i<=t;i++){
        for(int j=1;j<=t;j++){
            cin>>a[i][j];
            if(i==j) {
                pri=a[i][j]+pri;
            }
        }
    }

        for(int i=1;i<=t;i++){
            if(l!=tra){
                l=tra;
                sec=a[pru][tra]+sec;
            }
        tra--;
        pru++;
    }
    cout<<abs(pri-sec)<<endl;

    return 0;
}
