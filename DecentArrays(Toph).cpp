#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[102];
    int arr1[102];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr1[i]=arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]!=arr1[i]){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;

    return 0;
}

