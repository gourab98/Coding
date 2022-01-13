
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {9,2,3,5,1,4,6,7,8,12,43,2345,2345,223};
    int temp=1000000;
    int swaping;
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<arr_size;i++){
             temp=100000;
        for(int j=i;j<arr_size;j++){
            if(arr[j]<=temp)
            {
                swaping=arr[i];
                arr[i]=arr[j];
                arr[j]=swaping;

            }
        }
    }
    for(int i=0;i<arr_size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
