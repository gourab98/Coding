#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    int number;
    string a,b;
    int flag=0;
    cin>>test;
    while(test--){
            flag=0;
        cin>>number;
        cin>>a;
        cin>>b;
        for(int i=0;i<number;i++){
            if(a[i]=='1' && b[i]=='1'){
                flag=1;
    break;
            }
        }
        if(flag==1)
        {
           cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;


    }
}
