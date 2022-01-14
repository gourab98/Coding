#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,2,4,2,4,6,7,8,54,32,13,10,53,24,140,65,3,4,5,3,79};
    int temp=0,j;
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<arr_size;i++){
            ///cout<<"Temp: "<<i<<" "<<temp<<endl;
            temp = arr[i];
        for(j=i-1;j>=0;j--){
            if(temp<arr[j]){
                arr[j+1]=arr[j];
            }
            else {
                   break;
            }
        }
        arr[j+1]=temp;
    }

    for(int i=0; i<arr_size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
