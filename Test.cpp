#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s[3];
    cin>>s[0]>>s[1]>>s[2];
    int n=3;
    int subset_size = pow(2,n);
    for(int i=0;i<subset_size;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            {
                sum+=s[j];
            }
        }
        cout<<sum<<endl;
    }

}  


