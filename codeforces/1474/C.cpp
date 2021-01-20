#include <bits/stdc++.h>
#include <ext/rope>

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
using namespace __gnu_cxx;


vector<pair<int, int>> Check(int N, int ar[], int X)
{
   vector<pair<int, int>> res;
   multiset<int> S;

   rep(i, 0, 2 * N - 1) S.insert(ar[i]);
   rep(i, 0, N - 1) {
      auto it1 = S.end();
      it1--;

      int Y = X - *it1;
      S.erase(it1);

      auto it2 = S.find(Y);
      if (it2 == S.end())
         return {};
      res.pb({X - Y, Y});
      X = max(X - Y, Y);
      S.erase(it2);
   }
   return res;
}
void Solve()
{
   int N;
   cin >> N;

   int ar[2 * N];

   rep(i, 0, 2 * N - 1)  cin >> ar[i];
   // ar[0] = 0;
   sort(ar, ar + 2 * N);

   rep(i, 0, 2 * N - 2) {
      int X = ar[i] + ar[2 * N - 1];
      vector<pair<int, int>> ans = Check(N, ar, X);
      if (ans.size()) {
         cout << "YES\n" << X << "\n";
         for (auto it : ans)
            cout << it.first << " " << it.second << endl;
         return;
      }
   }
   cout << "NO\n";
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