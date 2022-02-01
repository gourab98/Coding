#include<bits/stdc++.h>
using namespace std;
    int titleToNumber(string name) {
     
        long long int sum=0, subsum=1;
        int amount=name.size();
        int i=0;
        while(amount>0)
        {
            for(int j=0;j<amount-1;j++){
                subsum = subsum*26; 
            }
            sum = sum + (name[i]-64)*subsum;  
            amount--;
            i++;
            subsum=1;
        }
        return sum;
    }
int main()
{
    string name;
    cout<<"Enter the name: ";
    cin>>name;
    cout<<"The position is : "<<titleToNumber(name);
}