#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cout<<"Please enter the Number: ";
    cin>>n;
    long long sum;
    for(int i=1;i<=10;i++){
        sum = i*n;
        cout<<n<<" X "<<i<<" = "<<sum<<endl;
    }
    return 0;

}