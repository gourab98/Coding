#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10]={1,2,3,5,6,7,8,9};

/// Traverse:
    cout<<"Traverse: ";
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        cout<<a[i]<<" ";
    }

/// Insertion:
    int item = 4;
    int n = 8;
    int k = 4;
    n=n-1; /// As array index start from 0
    k=k-1;
    for(int i=n;i>=k;i--){
        a[i+1]=a[i];
    }
    a[k]=item;
    cout<<"\nInsertion: ";
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        cout<<a[i]<<" ";
    }

/// Deletion:
     n = 9;
     k = 4;
     n = n-1;
     k = k-1;
     for(int i=k;i<n;i++){
        a[i]=a[i+1];
     }
     a[n]=0;
     cout<<"\nDeletion: ";
     for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        cout<<a[i]<<" ";
    }
/// Binary Search:
     n = 8;
     k = 7;
     int flag=0;
     int low = 0;
     int high = n-1;
     int mid;
     while(low<=high){
         mid=(low+high)/2;
        if(a[mid]==k){
            flag =1;
            cout<<"\nFound: "<<k<<" in the position of "<<mid+1<<endl;
            break;
        }
        else if(a[mid]<k){ low=mid+1;}
        else if(a[mid]>k){ high= mid-1;}
     }
     if(flag == 0){ cout<<"\nNot found: "<<k<<" in the array list.";}

///

}
