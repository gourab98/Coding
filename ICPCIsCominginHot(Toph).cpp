#include<bits/stdc++.h>
using namespace std;
int main()
{

    string a;
    int b[10];
    int big=0,num,temp;
    cin>>a;
      for(int i=0;i<10;i++){
        b[i]=0;
    }
    for(int i=0;i<a.size();i++){
        temp=(int)a[i]-'0';
        b[temp]=b[temp]+1;
    }
    for(int i=0;i<10;i++){
        if(b[i]>big){
            big=b[i];
            num=i;
        }
    }
    cout<<num<<endl;

    return 0;
}
