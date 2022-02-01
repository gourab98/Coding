/// 2+4+6+....+n

#include<bits/stdc++.h>
using namespace std;
long long int n,s=0;

int recursion(int n){

if(n==1){
    return 2;
}
else {
    return (n*2)+recursion(n-1);
}

}

long long int iteration()
{
    for(int i=1;i<=n;i++)
    {
        s+=(i*2);
    }
    return s;
}

int main()
 {
     cout<<"Enter the n: ";
     cin>>n;
     cout<<"Iteration: ";
     long long int ItResult = iteration();
     cout<<ItResult<<endl;


     cout<<"Recursion: ";
     long long int ReResult = recursion(n);
     cout<<ReResult<<endl;

 }
