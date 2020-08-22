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
     string s;
     ll n =0,i;

     cin>>s;

     for(i = 0; i < s.size(); i++)
          n += (s[i]-48);
     if(n%9==0)
          cout<<"Yes\n";
     else
          cout<<"No\n";


     return 0;
}
