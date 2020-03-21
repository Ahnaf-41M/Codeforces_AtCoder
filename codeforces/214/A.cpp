#include<bits/stdc++.h>
using namespace std;

int main()
{
     int i,j,n,m,c=0;

     cin>>n>>m;

     for(i = 0; i <= m; i++)
     {
          for(j = 0; j <= n; j++)
          {
               if(i*i+j==n&&i+j*j==m)
                    c++;

          }
     }
     cout<<c<<endl;
}
