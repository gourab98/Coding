#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,temp=0;
    int za[25];
    cin>>n;
    for(int z=0;z<n;z++){
        cin>>za[z];
        a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0;
        for(int y=1;y<=za[z];y++){
                temp=y;
            while(temp){
            if(temp%10==1)b++;
            else if(temp%10==2)c++;
            else if(temp%10==3)d++;
            else if(temp%10==4)e++;
            else if(temp%10==5)f++;
            else if(temp%10==6)g++;
            else if(temp%10==7)h++;
            else if(temp%10==8)i++;
            else if(temp%10==9)j++;
            else if(temp%10==0)a++;

            temp=temp/10;
            }
        }
        cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<" "<<i<<" "<<j<<endl;
    }

    return 0;
}
