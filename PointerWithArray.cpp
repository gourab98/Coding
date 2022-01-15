#include<bits/stdc++.h>
using namespace std;
int main()
{

    int somenumbers[5];
    cout<<somenumbers[0]<<endl;
    int *ptr = somenumbers; /// &somenumbers[0];
    cout<<*ptr<<endl;

    int a = 3;

    for(;ptr<&somenumbers[5];ptr++){
        *ptr = a;
        a= a*2;
    }

    for(int i=0;i<5;i++){
        cout<<"The array :"<<somenumbers[i]<<endl;
    }

}
