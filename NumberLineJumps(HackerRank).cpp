#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;

    if((x1>x2 && v1>=v2)||(x2>x1 && v2>=v1) || (x1>=x2 && v1>v2)||(x2>=x1 && v2>v1))
    {
        cout<<"NO"<<endl;
    }
    else
    {
        if(x1==x2)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        for(int i=1; i<=10002; i++)
        {

            x1=x1+v1;
            x2=x2+v2;
            if(x1==x2)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        cout<<"NO"<<endl;
    }

    return 0;
}

