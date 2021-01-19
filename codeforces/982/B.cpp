#include <bits/stdc++.h>
#include <ext/rope>

#define  pb            push_back
#define  int           long long
#define  endl          "\n"
#define  MX            100005
#define  PII           pair<int,int>

#define  all(v)        v.begin(),v.end()
#define  gcd(a,b)      __gcd(a,b)
#define  lcm(a,b)      (a*b)/gcd(a,b)
#define  rep(i,a,b)    for(int i = a; i <= b; i++)
#define  irep(i,b,a)   for(int i = b; i >= a; i--)

using namespace std;
using namespace __gnu_cxx;

void Solve()
{
   int N;
   priority_queue<PII> extro;
   priority_queue<PII, vector<PII>, greater<PII> > intro;
   string s;

   cin >> N;

   int wt[N + 1];

   rep(i, 1, N) {
      cin >> wt[i];
      intro.push({wt[i], i});
   }
   cin >> s;

   vector<int> ans;

   rep(i, 0, s.size() - 1) {
      if (s[i] == '0') {
         auto tp = intro.top();
         intro.pop();
         ans.pb(tp.second);
         extro.push(tp);
      }
      else {
         auto tp = extro.top();
         extro.pop();
         ans.pb(tp.second);
      }
   }
   for (int x : ans)
      cout << x << " ";
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   //int T;
   //cin >> T;

   //while (T--)
   Solve();

   return 0;
}