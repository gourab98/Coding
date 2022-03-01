#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> vec(n+1,0);
    for(int i=0;i<vec.size();i++){
        vec[i] = 1 + vec[i&(i-1)];
        cout<<vec[i]<<endl;
    }
    
}