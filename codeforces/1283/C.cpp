#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  MX           200005
#define  pb           push_back
#define  int          long long
#define  PII          pair<int,int>
#define  endl         "\n"
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

int n, ar[MX], dibe[MX], nibe[MX];
deque<int> in, out, all;

void Solve(int tc)
{
   cin >> n;
   rep(i, 1, n) {
      cin >> ar[i];
      if (ar[i])
         dibe[i]++, nibe[ar[i]]++;
   }

   rep(i, 1, n) {
      if (!dibe[i] && !nibe[i]) all.pb(i);
      else if (!dibe[i]) out.pb(i);
      else if (!nibe[i]) in.pb(i);
   }
   for (int x : all) out.push_front(x);
   while (!all.empty()) in.pb(all.back()), all.pop_back();

   for (int x : out) {
      if (x == in.back()) {
         ar[x] = in.front();
         in.pop_front();
      }
      else {
         ar[x] = in.back();
         in.pop_back();
      }
   }
   rep(i, 1, n) cout << ar[i] << " ";
   cout << "\n";

}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int T = 1;
   //cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}