#include<bits/stdc++.h>

#define gcd(a,b)     __gcd(a,b)
#define lcm(a,b)     (a*(b/gcd(a,b)))

#define pb   push_back
#define endl "\n"

#define ll  long long
#define ull unsigned long long

#define W(t)            while(t--)
#define rep(i,n)      for(i = 0; i < n; i++)
#define repit(it,type)  for(auto it = type.begin(); it != type.end(); it++)
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

int main()
{
  IOS

  ll a, b, c, d;
  cin >> a >> b >> c >> d;
  ll x1, y1,x2,y2;

  x1 = max(a,b); y1 =max(c,d);
  x2 = min(a,b); y2 =min(c,d);

  ll r1 = (a*c),r2 = a*d,r3 = b*c,r4 =b*d;
  ll ans = max(max(r1,r2),max(r3,r4));
  cout<<ans;

  // if(x1>0 &&y1>0){
  //   cout<<(x1*y1);
  // }
  // else if(x1<0 && y1<0){
  //   cout<<(x2*y2);
  // }
  // else if(x1<0){
  //   cout<<(x1*y2);
  // }
  // else
  //   cout<<(x2*y1);

  return 0;
}