#include <bits/stdc++.h>
#include <ext/rope>

#define  pb            push_back
#define  int           long long
#define  endl          "\n"
#define  MX            100005
#define  pii           pair<int,int>

#define  all(v)        v.begin(),v.end()
#define  gcd(a,b)      __gcd(a,b)
#define  lcm(a,b)      (a*b)/gcd(a,b)
#define  rep(i,a,b)    for(int i = a; i <= b; i++)
#define  irep(i,b,a)   for(int i = b; i >= a; i--)

using namespace std;
using namespace __gnu_cxx;
void Solve()
{
   int N, mx;
   cin >> N;

   bool Ok[N + 1];
   set<int> ans;
   vector<pii> Cum;
   priority_queue<pii> Q;
   priority_queue<pii, vector<pii>, greater<pii> > tmp;
   Cum.pb({0, 0});

   rep(i, 1, N) {
      int x; cin >> x;
      tmp.push({x, i});
      Q.push({x, i});
   }
   
   Ok[Q.top().second] = true;
   ans.insert(Q.top().second);

   while (!tmp.empty()){
      int token = tmp.top().first;
      int indx  = tmp.top().second;
      Cum.pb({Cum.back().first + token, indx}), tmp.pop();
   }

   irep(i, N - 1, 1) {
      int tokens = Q.top().first;
      int indx = Q.top().second;
      Q.pop();

      if (Cum[i].first >= tokens && Ok[indx])
         Ok[Cum[i].second] = true, ans.insert(Cum[i].second);
      else break;
   }

   cout << ans.size() << endl;
   for (int xx : ans)
      cout << xx << " ";
   cout << endl;

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