#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n,i;
     long long  sum=0;

     cin>>n;

     for(i = 1; i <= n; i++)
     {
          if(i%3==0 && i%5==0)
               sum=sum;
          else if(i%3==0)
               sum==sum;
          else if(i%5==0)
               sum==sum;
               else
                    sum+=i;

     }
     cout<<sum<<endl;
}
