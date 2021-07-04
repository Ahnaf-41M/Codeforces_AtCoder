#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  MX           100005
#define  pb           push_back
#define  int          long long
#define  PII          pair<int,int>
#define  endl         "\n"
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

bool Check(int n, int a)
{
   while (n % a == 0)
      n /= a;
   return n == 1;
}
bool Check2(int n, int a, int b)
{
   int cur = a;
   while (cur <= n) {
      if ((n - cur) % b == 0) return true;
      cur *= a;
   }
   return false;
}
void Solve(int tc)
{
   int a, b, n;
   cin >> n >> a >> b;

   if (n == 1 || b == 1) cout << "Yes\n";
   else if (a == 1) {
      if (n % b == 1) cout << "Yes\n";
      else cout << "No\n";
   }
   else if (n % b == 1 || Check(n, a) || Check2(n, a, b))
      cout << "Yes\n";
   else cout << "No\n";
}
signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);

   int T = 1;
   cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}