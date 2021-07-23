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

void Solve(int tc)
{
   string s;
   cin >> s;

   int ans = 0, turn = 1, tot = 0;
   map<char, int> green, red, mp;

   for (char ch : s) mp[ch]++;
   for (auto it : mp) {
      if (it.ss > 1) ans++, tot += it.ss;
   }
   int n = s.size();
   n = (n - tot);
   ans += (n / 2);
   cout << ans << "\n";
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);

   int T = 1;
   cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}