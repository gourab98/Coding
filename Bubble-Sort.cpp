#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {9,3,2,5,1,4,6,7,8,54,32,13,10,53,24,14,65,3,4,5,39};
    int temp;
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<arr_size; i++)
    {
        for(int j=0; j<arr_size-i; j++)
        {
            if(arr[j]>=arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(int i=0; i<arr_size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
