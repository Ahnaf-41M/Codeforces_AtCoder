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
   int n, k = 0, last = -1, pos;
   string s;
   set<int> zero, one;

   cin >> n >> s;

   vector<int> ans(n);
   rep(i, 0, n - 1) {
      if (s[i] == '0') zero.insert(i);
      else one.insert(i);
   }

   while (true) {
      if (one.empty() || zero.empty()) {
         if (last == -1 || (one.empty() && last == 0 || zero.empty() && last == 1))
            break;
      }
      if (last == -1) {
         k++;
         auto it1 = one.begin(), it2 = zero.begin();
         if (*it1 > *it2) {
            last = 0, pos = *it2, zero.erase(it2);
            ans[pos] = k;
         }
         else {
            last = 1, pos = *it1, one.erase(it1);
            ans[pos] = k;
         }
      }
      else {
         if (last == 1) {
            auto it = zero.upper_bound(pos);
            if (it != zero.end()) {
               last = 0, pos = *it, zero.erase(it);
               ans[pos] = k;
            }
            else last = -1;
         }
         else {
            auto it = one.upper_bound(pos);
            if (it != one.end()) {
               last = 1, pos = *it, one.erase(it);
               ans[pos] = k;
            }
            else last = -1;
         }
      }
   }
   while (!one.empty()) {
      auto it = one.begin();
      ans[*it] = ++k, one.erase(it);
   }
   while (!zero.empty()) {
      auto it = zero.begin();
      ans[*it] = ++k, zero.erase(it);
   }
   cout << k << "\n";
   for (int x : ans) cout << x << " ";
   cout << "\n";
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