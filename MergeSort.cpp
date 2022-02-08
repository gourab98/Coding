#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int begin, int mid, int end){
    int n1 = mid - begin +1;
    int n2 = end - mid;
}

void mergeSort(int arr[],int l,int h){
    if(l>=h)
        return;

    if(l<h){
        int mid =(l+h)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,h);
        merge(arr,l,mid,h);
    }    
}
int main()
{
    int arr[]={12,11,13,5,6,7,43,81,9,10,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    //mergeSort(arr,0,n-1);
    for(auto each:arr)
    {
        cout<<each<<" ";
    }
}