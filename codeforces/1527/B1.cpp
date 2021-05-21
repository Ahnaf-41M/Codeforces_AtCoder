#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  pb           push_back
#define  MX           100005
#define  int          long long
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
   string s;
   cin >> n >> s;

   if (n == 1) {
      if (s[0] == '0') cout << "BOB\n";
      else cout << "DRAW";
   }
   else {
      int zero = 0;
      for (char ch : s) zero += (ch == '0');
      if (zero == 1 || (zero && zero % 2 == 0)) cout << "BOB\n";
      else if (zero & 1) cout << "ALICE\n";
      else cout << "DRAW\n";
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