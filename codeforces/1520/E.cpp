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
   string s;
   vector<int> v, pref, suff;

   cin >> n >> s;

   int i = 0, j = n - 1;
   while (i < n && s[i] == '.')
      i++;
   while (j >= 0 && s[j] == '.')
      j--;

   while (i <= j) {
      int k = i;
      while (k <= j && s[k] == '*')
         k++;
      if (i != k) v.pb(k - i);
      while (k <= j && s[k] == '.')
         v.pb(0), k++;
      i = k;
   }

   i = 0;
   int last = 0, len  = v.size(), tot = 0;

   while (i < len) {
      int cnt = 0;
      last += v[i], i++;
      while (i < len && !v[i])
         cnt++, i++;
      if (cnt) {
         tot += last * cnt;
         pref.pb(tot);
      }
   }
   i = len - 1, tot = 0, last = 0;
   while (i >= 0) {
      int cnt = 0;
      last += v[i], i--;
      while (i >= 0 && !v[i])
         cnt++, i--;
      if (cnt) {
         tot += (last * cnt);
         suff.pb(tot);
      }
   }
   reverse(all(suff));
   // for (int x : pref) cout << x << " ";
   // cout << endl;
   // for (int x : suff) cout << x << " ";
   int res = 1e15;
   len = pref.size();
   rep(i, 0, len - 2) {
      res = min(res, pref[i] + suff[i + 1]);
   }
   if (pref.size())
      res = min(res, min(pref[len - 1], suff[0]));
   cout << (res == 1e15 ? 0 : res) << endl;
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