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

char s[1005][1005];
int dis[1005][1005];
int xa, ya, xb, yb, fa, fb;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

void Solve(int tc)
{
   cin >> xa >> ya >> xb >> yb >> fa >> fb;

   int mnx = min(xa, xb), mny = min(ya, yb);
   int mxx = max(xa, xb), mxy = max(ya, yb);
   int ans = 0;
   if ((xa == fa && fa == xb) && (mny <= fb && fb <= mxy))
      ans = 2;
   if ((mnx <= fa && fa <= mxx) && (ya == fb && fb == yb))
      ans = 2;
   cout << abs(xa - xb) + abs(ya - yb) + ans << "\n";
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);

   memset(dis, -1, sizeof(dis));
   int T = 1;
   cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}