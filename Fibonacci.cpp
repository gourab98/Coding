#include<bits/stdc++.h>
using namespace std;

long long int  fibonacci(int n)
{
    if(n==0 || n==1)
    {return n;}
    else return fibonacci(n-1)+fibonacci(n-2);
}


int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<fibonacci(i)<<" ";
    }
}