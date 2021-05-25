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

int freq[MX];

void Solve(int tc)
{
   int n, q, rect = 0, sqr = 0;
   cin >> n;
   rep(i, 1, n) {
      int x; cin >> x;
      sqr -= freq[x] / 4;
      rect -= freq[x] / 2;
      freq[x]++;
      sqr += freq[x] / 4;
      rect += freq[x] / 2;
   }
   cin >> q;

   while (q--) {
      char symb;
      int x;
      cin >> symb >> x;

      sqr -= freq[x] / 4;
      rect -= freq[x] / 2;
      (symb == '+' ? freq[x]++ : freq[x]--);

      sqr += freq[x] / 4;
      rect += freq[x] / 2;

      if (sqr >= 1 && rect >= 4)
         cout << "YES\n";
      else
         cout << "NO\n";
   }

   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   // freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
   int T = 1;
   //cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}