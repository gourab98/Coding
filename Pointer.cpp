#include<bits/stdc++.h>
using namespace std;
int main(){

    int x = 14;
    printf("X is %d\n",x);
    x = 34;
    cout<<"X is "<<x<<endl;
    int *apnt;
    apnt = &x;
    printf("apnt is %d\n", apnt);
    printf("apnt is %d\n", *apnt);
    printf("apnt is %x\n", apnt);
    cout<<"apnt is "<<apnt<<endl;
    cout<<"apnt is "<<*apnt<<endl;

    *apnt = 64;
    cout<<"X is "<<x<<endl;
}
