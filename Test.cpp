#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
     while(n>1)
        {
                if(n%2==0){
                    n=n/2;
                }
                else if(n%3==0){
                     n=n/3;                    
                }
                else if(n%5==0){
                     n=n/5;                    
                }
                else{
                    cout<<"NOT The End"<<endl;
                    break;
                }
        }
        
        cout<<"The end:"<<n<<endl;
    
    
}