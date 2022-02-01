/// 1+2+3+4+5+6+....+n

#include<bits/stdc++.h>
using namespace std;
long long int n,s=0;

long long int iteration()
{
    for(int i=1;i<=n;i++)
    {
        s+=i;
    }
    return s;
}

long long recursion()
{

}

int main()
 {
     cout<<"Enter the n: ";
     cin>>n;
     cout<<"Iteration: ";
     long long int ItResult = iteration();
     cout<<ItResult<<endl;


     cout<<"Recursion: ";
     //long long int ReResult = recusion();
     //cout<<ReResult<<endl;

 }
