#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,r,c;
    cin>>p;
    cin>>r;
    cin>>c;
    double v[101][101]={0.0};
    v[0][0] = p;
    for(int i=0;i<100;i++){
        for(int j=0;j<=i;j++){
            if(v[i][j]>=1){
                v[i+1][j] = v[i+1][j] + (v[i][j]-1) / 2.0;
                v[i+1][j+1] = v[i+1][j+1] + (v[i][j]-1) / 2.0;
                 v[i][j]=1;
            }
        }
    }
    cout<<v[r][c];
}