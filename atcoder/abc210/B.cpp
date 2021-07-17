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
   int n, pl = 1;
   string s;
   cin >> n >> s;
   deque<char> Q;

   for (char ch : s) {
      if (ch == '1') {
         cout << (pl ? "Takahashi" : "Aoki");
         return;
      }
      pl ^= 1;
   }
   // while (!Q.empty()) {
   //    if (Q.front() == '0') {
   //       pl ^= 1;
   //       Q.pop_front();
   //    }
   //    else if (Q.back() == '0') {
   //       pl ^= 1;
   //       Q.pop_back();
   //    }
   //    else {
   //       cout << (pl ? "Takahashi" : "Aoki");
   //       return;
   //    }
   // }
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);

   int T = 1;
   //cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}