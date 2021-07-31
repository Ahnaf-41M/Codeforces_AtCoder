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

bool ok(string s)
{
   map<char, int> mp;
   for (char ch : s) mp[ch]++;
   return (int)mp.size() == 1;
}
void Solve(int tc)
{
   string s;
   cin >> s;
   if (ok(s)) cout << "Weak";
   else {
      bool c = 1;
      rep(i, 0, 2) {
         if ((s[i] == '0' && s[i + 1] == '9')) {
            cout << "Strong";
            return;
         }
         if (((s[i] == '9' && s[i + 1] == '0') || (s[i] + 1 == s[i + 1]))) continue;
         else {
            cout << "Strong";
            return;
         }
      }
      cout << "Weak";
   }
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