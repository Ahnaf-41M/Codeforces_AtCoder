#include <bits/stdc++.h>
#include <ext/rope>

#define  pb            push_back
#define  int           long long
#define  endl          "\n"
#define  MX            100005

#define  all(v)        v.begin(),v.end()
#define  gcd(a,b)      __gcd(a,b)
#define  lcm(a,b)      (a*b)/gcd(a,b)
#define  rep(i,a,b)    for(int i = a; i <= b; i++)
#define  irep(i,b,a)   for(int i = b; i >= a; i--)

using namespace std;
using namespace __gnu_cxx;

void Solve()
{
   int n,m;
   string s;
   cin >> n;
   int a[n];
   int pod=0;

   rep(i,0,n-1) cin >> a[i];
   rep(i,0,n-1){
      int x;
      cin >> x;
      pod+=(x*a[i]);
   }
   if(pod)
      cout << "No\n";
   else
      cout << "Yes\n";
   

   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   
   //int T;
   //cin >> T;

   //while (T--)
      Solve();

   return 0;
}