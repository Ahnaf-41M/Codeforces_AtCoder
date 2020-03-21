#include<bits/stdc++.h>
using namespace std;

int main()
{
     int i,j,n,m,x;
     cin>>n>>m;
     int a[n],b[n];

     set<int> s;
     for(i = 0; i < n; i++)cin>>a[i];

     for(i = n-1; i >= 0; i--)
     {

          s.insert(a[i]);
          b[i] = s.size();
     }
     while(m--)
     {
          cin>>x;
          cout<<b[x-1]<<endl;
     }
}
