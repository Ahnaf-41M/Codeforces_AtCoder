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
   int n;
   cin >> n;

   vector<int> v(2*n);
   for (int& x : v) cin >> x;
   sort(all(v));

   int i = 0, j = 2*n - 1;

   while (i <= j) {
      if (i == j) cout << v[i] << " ";
      else cout << v[i] << " " << v[j] << " ";
      i++, j--;
   }
   cout << "\n";

   return;
}
signed main()
{
   // ios_base::sync_with_stdio(0);
   // cin.tie(0);
   // cout.tie(0);

   int T = 1;
   cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}