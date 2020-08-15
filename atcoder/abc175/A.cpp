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
     ll t,n,i;
     string s;
     cin>>s;
     int cnt=0,ans=0;
     rep(i,s.size())
     {
          if(s[i]=='R')
               cnt++;
          else
          {
               ans = max(cnt,ans);
               cnt=0;
          }
     }
     ans = max(cnt,ans);
     cout<<ans;

     return 0;
}
