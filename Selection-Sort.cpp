#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {9,3,2,5,1,4,6,7,8,54,32,13,10,53,24,14,65};
    int temp=1000000;
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<arr_size;i++){
             temp=100000;
        for(int j=i;j<arr_size;j++){
            if(arr[j]<=temp)
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0;i<arr_size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
