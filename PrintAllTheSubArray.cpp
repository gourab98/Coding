#include<bits/stdc++.h>
using namespace std;
int main()
{
///    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int arr[]={-1};
    int sum=0;
    int large= INT_MIN;
    int sizeing = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<sizeing; i++){
        for(int j=i;j<sizeing; j++){
             for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
                sum=sum+arr[k];
                if(large<=sum){
                    large = sum;
                }
             }
             sum=0;
          cout<<endl;
        }
        sum=0;
        cout<<endl;
    }

    cout<<large<<endl;

}
