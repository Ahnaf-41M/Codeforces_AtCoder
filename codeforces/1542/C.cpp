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

int MOD = 1e9 + 7;

int LCM(int a, int b)
{
   return (a * b) / __gcd(a, b);
}
void Solve(int tc)
{
   int n, ans = 0, cur_lcm = 1;
   cin >> n;

   for (int i = 2; ; i++) {
      int r1 = n / cur_lcm; //number of integers from 1 to n which are divisible by numbers from 1 to i-1
      cur_lcm = LCM(cur_lcm, i);
      int r2 = n / cur_lcm; //number of integers from 1 to n which are divisible by numbers from 1 to i
      if (!r1) break;
      ans += i * (r1 - r2); //r1-r2 => number of integers from 1 to n which are not divisible by i
      ans %= MOD;
   }
   cout << ans << "\n";
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