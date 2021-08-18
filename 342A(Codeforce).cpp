#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,b=0,c=0,d=0,e=0,mid=0;
    int arr[100005];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++)
    {
       if(arr[i]==1) a++;
       else if(arr[i]==2) b++;
       else if(arr[i]==3) c++;
       else if(arr[i]==4) d++;
       else if(arr[i]==6) e++;
       else {
        cout<<"-1"<<endl;
        return 0;
       }
    }
    if(a!=n/3)
        {
        cout<<"-1"<<endl;
        return 0;
       }
    if(a==b+c && b+c==d+e){

       mid=a-(d+c);
       if(mid<0)
        {
        cout<<"-1"<<endl;
        return 0;
       }
        while(d--){
            cout<<"1 2 4"<<endl;
        }
        while(mid--){
            cout<<"1 2 6"<<endl;
        }
        while(c--){
            cout<<"1 3 6"<<endl;
        }
    }
    else cout<<"-1"<<endl;
    return 0;
}
