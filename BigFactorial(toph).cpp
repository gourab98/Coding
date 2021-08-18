#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int a,i,fac=1;
    int b,c,d,e;
    cin>>a;
    for(i=1;i<=a;i++){
        fac=fac*i;
    }
    if(a>20 || (fac%10000)==0){
        cout<<"0000"<<endl;
    }
    else {
            e=fac%10;
            fac=fac/10;
            d=fac%10;
            fac=fac/10;
            c=fac%10;
            fac=fac/10;
            b=fac%10;

            if(b!=0)
            {cout<<b<<c<<d<<e;}
            else if(b==0 && c!=0)
            {cout<<c<<d<<e;}
            else if(b==0 && c==0 && d!=0)
            {cout<<d<<e;}
            else if(b==0 && c==0 && d==0 && e!=0)
            {cout<<e;}
    }
    return 0;
}

