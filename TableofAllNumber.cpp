#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int number, ghor;
    cout<<"Please enter a number:";
    cin>>number;
    cout<<endl;
    cout<<"Please enter the ghor:";
    cin>>ghor;
    cout<<endl;
    cout<<"The number is : "<<number<<endl;
    cout<<endl;
    for(long long int i=1;i<=ghor;i++)
    {
        cout<<number<<" X "<<i<<" = "<<number*i<<endl;
    }
    return 0;
}
