#include<bits/stdc++.h>
using namespace std;

bool EvenDigitSum(int n){
    int sum = 0;
    while(n>0){
       sum = sum+ n%10;
       n/=10;
    }
    if(sum%2==0) return true;
    else return false;
}

int main()
{
    int num;
    int count=0;
    cin>>num;
    for(int i=2;i<=num;i++){
        if(EvenDigitSum(i))
            {
                cout<<i<<endl;
                count++;
            };
    }
    cout<<count<<endl;
}