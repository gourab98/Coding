#include<bits/stdc++.h>
using namespace std;
int main()
{
  string a;
  cin>>a;
  int k=0,j=0;
  int n[25];

  for(int i=a.size()-1;i>=0;i--){
    if(j==3){
        n[k++]=',';
        n[k++]=a[i];
        j=0;
    }
    else n[k++]=a[i];

    j++;
  }

  for(int i=k-1;i>=0;i--){
      printf("%c",n[i]);
  }

  return 0;
}
