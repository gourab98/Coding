#include<bits/stdc++.h>
using namespace std;

int stack_push(int arr[],int  top, int value)
{
    top++;
    arr[top]=value;
}

int main()
{
    int arr[10];
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    int top =-1;
    int value;

    arr[10] = stack_push(arr, top, 13);
    top++;
    arr[10] = stack_push(arr, top, 23);
    top++;
    for(int i=0; i<arr_size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
