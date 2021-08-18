#include<bits/stdc++.h>
using namespace std;

int linear_search(int a[], int n, int x, int range)
{
    for(int i=n; i<range; i++)
    {
        if(a[i]==x)
        {
            return i;
            cout<<i<<endl;
        }
    }
    return -1;
}
int main()
{
    int a[]= {12,2,343,2,43,53,43,53,53,34,34,6,34,67,45,2,65,76,34,7};
    int range = sizeof(a)/sizeof(int);
    int n=0;
    int x=53;
    int result = -2;
    while(1)
    {
        result = linear_search(a,n,x,range);
        n=result+1;
        if(result==-1)
            break;
        cout<<result+1<<" ";
    }

}
