#include <bits/stdc++.h>
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

void Solve()
{
   int n;
   vector<int> zero, one;

   cin >> n;
   rep(i, 0, n - 1) {
      int x; cin >> x;
      (x == 0 ? zero.pb(0) : one.pb(1));
   }
   if (one.size() > zero.size()) {
      if (one.size() & 1) one.pop_back();
      cout << one.size() << endl;
      for (int x : one) cout << x << " ";
   }
   else {
      cout << zero.size() << endl;
      for (int x : zero) cout << x << " ";
   }
   cout << endl;

   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int T;
   cin >> T;

   while (T--)
      Solve();

   return 0;
}