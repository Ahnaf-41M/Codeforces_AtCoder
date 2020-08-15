#include<bits/stdc++.h>

#define gcd(a,b)     __gcd(a,b)
#define lcm(a,b)     (a*(b/gcd(a,b)))

#define pb   push_back
#define endl "\n"

#define ll  long long
#define ull unsigned long long

#define W(t)            while(t--)
#define rep(i,n)        for(int i = 0; i < n; i++)
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

int main()
{
     IOS
     ll t,n,i,j,k;
     string s;
     cin>>n;
     ll a[n];
     rep(i,n) cin>>a[i];
     ll cnt=0;

     for(i = 0; i < n; i++)
     {
          for(j = i+1; j < n; j++)
          {
               for(k = j+1;k < n; k++)
               {
                    if((a[i]+a[j] > a[k] &&a[i]+a[k]>a[j]&&a[j]+a[k]>a[i]) && a[i]!=a[j]&&a[j]!=a[k]
                       && a[k]!=a[i])
                         cnt++;
               }
          }
     }
     cout<<cnt<<endl;
     return 0;
}
