#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    int flag;
    int j;
    int a,countt=1;
    scanf("%d",&a);
    for(i=2; i<=100000; i++)
    {
        flag=0;

        for(j=2; j<i; j++)
        {
            if(i%j==0)

                flag=1;
        }

        if(flag==0)
        {
          if(countt==a){
            break;
          }
          countt++;
        }

    }
    cout<<i<<endl;
    return 0;
}
