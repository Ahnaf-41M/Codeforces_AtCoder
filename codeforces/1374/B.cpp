#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
     ll t,n;

     cin>>t;

     while(t--)
     {
          cin>>n;
          ll cnt=0;
          ll b = n*2;
          bool ok = true;

          while(n!=1)
          {
               if(n%6==0)
                    n/=6;
               else
               {
                    if((n*2)%6==0)
                         n*=2;
                    else
                         ok = false;
               }
               cnt++;
               if(!ok)
                    break;
          }
          if(!ok)
               cout<<-1<<endl;
          else
               cout<<cnt<<endl;
     }
}
