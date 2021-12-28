#include<bits/stdc++.h>
using namespace std;

void decToBinary(int n){
    int binaryNumber[32];
    int binaryNum[32];
    int i=0;
    while(n>0){
        binaryNum[i]=n%2;
        n=n/2;
        i++;
    }
    int z=0;
    for(int j=i-1;j>=0;j--){
        //cout<<binaryNum[j];
        if(binaryNum[j]==0){
            binaryNumber[z]=1;
        }
        else{
            binaryNumber[z]=0;
        }
        //binaryNumber[z]=binaryNum[j];
        z++;
    }
    ///cout<<endl;
    ///for(int p=0;p<z;p++){
    ///    cout<<binaryNumber[p];
    ///}
    ///cout<<endl;
    int dec_value=0;
    long long int base =1;
    for (int q = z - 1; q >= 0; q--) {
        if (binaryNumber[q] == 1)
            dec_value += base;
        base = base * 2;
    }

    cout<<dec_value<<endl;
}

int main()
{
    int n;
    cin>>n;
    decToBinary(n);
    return 0;
}
