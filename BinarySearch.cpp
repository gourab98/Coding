#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int number,int s)
{
    int left = 0;
    int right = s-1;
    int mid=(left+right)/2;

    while(left<=right)
    {
        if(arr[mid]==number)
        {
            return mid;
        }
        else if(arr[mid]<number)
        {
            left=mid+1;
        }
        else if(arr[mid]>number)
        {
            right=mid-1;
        }
        mid=(left+right)/2;
    }
    return -1;
}

int main()
{
    int arr[102];
    int i=0;
    while(i!=102)
    {
        arr[i]=i*i;
        i++;
    }
    i=0;
    while(i!=102)
    {
        cout<<arr[i]<<" "<<i<<endl;
        i++;
    }
    int s;
    s = sizeof(arr)/sizeof(arr[0]);
    int number = 4;
    int index=binarySearch(arr,number,s);
    cout<<"The number index: "<<index<<endl;
}
