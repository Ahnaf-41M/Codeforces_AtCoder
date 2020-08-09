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
ll i,j,t,n,m;

int main()
{
    IOS

    cin>>t;

    W(t)
    {
        cin>>n>>m;
        int ans=0;
        char s[n+1][m+1];
        for(i = 0; i < n; i++)
            for(j = 0; j < m; j++)
                cin>>s[i][j];
         for(i = 0; i < n; i++)
         {
              for(j = 0; j  <m;j++)
              {
                   if(s[i][j]=='D')
                   {
                        if(i+1>=n)
                         ans++;
                   }
                   if(s[i][j]=='R')
                   {
                        if(j+1>=m)
                         ans++;
                   }
              }
         }
         cout<<ans<<endl;

    }

}
