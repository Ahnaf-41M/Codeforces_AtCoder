#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  pb           push_back
#define  MX           100005
#define  int          long long
#define  PII          pair<int,int>
#define  endl         "\n"
#define  gcd(a,b)     __gcd(a,b)
#define  lcm(a,b)     (a*b)/gcd(a,b)
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

void Solve(int tc)
{
   int n, sum = 0, exr = 0;

   cin >> n;
   int ar[n];
   for (int &x : ar) {
      cin >> x;
      sum += x;
      exr ^= x;
   }
   if (2 * exr == sum) cout << "0\n\n";
   else {
      if (exr == 0) cout << "1\n" << sum << "\n";
      else cout << "2\n" << exr << " " << sum + exr << "\n";
   }
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int T = 1;
   cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}