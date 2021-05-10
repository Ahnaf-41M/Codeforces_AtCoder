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

struct custom_hash {
   static uint64_t splitmix64(uint64_t x) {
      // http://xorshift.di.unimi.it/splitmix64.c
      x += 0x9e3779b97f4a7c15;
      x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
      x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
      return x ^ (x >> 31);
   }

   size_t operator()(uint64_t x) const {
      static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
      return splitmix64(x + FIXED_RANDOM);
   }
};
void Solve(int tc)
{
   int n, cur_mx = 0, ok = 1;
   set<int> cur;
   vector<int> ans;
   unordered_map<int, int, custom_hash> cnt;

   cin >> n;
   int ar[n];

   rep(i, 0, n - 1) {
      cin >> ar[i];
      if (ar[i] < cur_mx) ok = 0;
      else cur_mx = ar[i];
      cur.insert(i + 1);
      cnt[ar[i]]++;
   }
   if (!ok) {
      cout << "-1\n";
      return;
   }
   rep(i, 1, n) if (cnt[i] > i) {
      cout << "-1\n";
      return;
   }

   int i = 0;
   while (i < n) {
      int j = i;
      while (j < n && ar[j] == ar[i])
         j++;
      ans.pb(ar[i]);
      cur.erase(ar[i]);
      int dif = j - i - 1;
      while (dif && !cur.empty()) {
         auto it = cur.begin();
         if (*it < ar[i]) {
            ans.pb(*it);
            cur.erase(it);
         }
         else break;
         dif--;
      }
      i = j;
   }
   if (ans.size() != n) cout << "-1";
   else
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