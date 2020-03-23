#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,i,j,c;

  cin>>n;

  for(i = n; i >= 0; i--)
  {
       c = n-i;
       for(j = 0; j < i; j++)
       {
            cout<<"  ";
       }
       for(j = 0; j < c; j++)
       {
            cout<<j<<" ";
       }
       for(j = c; j > 0; j--)
       {
            cout<<j<<" ";
       }
       cout<<0<<endl;
  }
  for(i = 1; i <=n; i++)
  {
       c = n-i;
       for(j = 0; j < i; j++)
       {
            cout<<"  ";
       }
       for(j = 0; j < c; j++)
       {
            cout<<j<<" ";
       }
       for(j = c; j > 0; j--)
       {
            cout<<j<<" ";
       }
       cout<<0<<endl;
  }
  return 0;
}
