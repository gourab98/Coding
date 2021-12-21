#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,coun=0, sum=0, p=0, tot;
    cin>>a;
    int i=0;
    while(a>0){
        if(a%2==1){coun++;};
        a=a/2;
        i++;
    }
    while(coun--){
            tot=1;
            p=coun;
    while(p--){tot=tot*2;};
       sum=sum+tot;
    }
    cout<<sum<<endl;
}
