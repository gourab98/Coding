#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 10 & 12; 
    //        1010 = 10
    //        1100 = 12
    // And(&) 1000 = 8
    cout<< n <<endl;//8
    
    n = 10 | 12;
    //       1010 = 10
    //       1100 = 12
    // OR(|) 1110 = 14
    cout<< n << endl;//14

    n = 5<<3; //It's called leftshift. It means 5*2^3 =40 
    // It also means 101 + 000(added to the right side) = 101000 
    cout<< n << endl;//40

    n = 10>>1; //It's called rightshift. It means 10/2^1 = 5
    // It also means 1010 shifted to 101 | 0 , here 101 = 5  
    cout<< n << endl;//5

    n = 45^20; 
    //        101101 = 45
    //        010100 = 20
    // XOR(^) 111001 = 57 
    // If 0-0 / 1-1 = 0 OR 1-0 / 0-1 =1 it's called XOR.
    cout<<n<<endl;//57
    
    
}