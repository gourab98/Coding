#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[12]={10,9,8,7,6,5,4,3,2,1};
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i];
    }
    for(int j=0;j<sizeof(arr)/sizeof(arr[0]);j++){
       for(int i=0;i<sizeof(arr)/sizeof(arr[0])-j;i++){
          if(arr[i]>arr[i+1]){
          arr[i]=arr[i]+arr[i+1];
          arr[i+1]=arr[i]-arr[i+1];
          arr[i]=arr[i]-arr[i+1];
          }
       }
    }
    cout<<endl;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i];
    }
}
