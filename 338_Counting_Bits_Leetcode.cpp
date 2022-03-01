#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> vec(n+1,0);
    for(int i=1;i<vec.size();i++){
        vec[i] = 1 + vec[i&(i-1)];
       cout<<vec[i]<<endl;
    }
    
}


class Solution {
public:
    vector<int> countBits(int n) {
        
      vector<int> vec(n+1,0);
    for(int i=1;i<=n;i++){
        vec[i] = vec[i/2]+i%2;
    }
        return vec;
    }
};

