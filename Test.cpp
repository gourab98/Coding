#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t;
    vector<int> vec(n+1,0);
    for(int i=1;i<vec.size();i++){
        vec[i] = 1 + vec[i&(i-1)];
        t = i&(i-1);
        
        cout<<i<<" "<<t<<" "<<vec[i]<<endl;
    }
    
}