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

bool Check(string s)
{
   string s2 = s;
   sort(all(s2));
   char ch = 'a';
   for (int x : s2) {
      if (x != ch) {
         return 0;
      }
      ch++;
   }
   return 1;
}
void Solve(int tc)
{
   string s;
   cin >> s;
   // sort(all(s));

   if (!Check(s)) {
      cout << "NO\n";
      return;
   }
   map<char, int> mp;
   rep(i, 0, s.size() - 1) mp[s[i]] = i;
   int c1 = mp['a'] - 1, c2 = mp['a'] + 1;

   sort(all(s));
   for (char x : s) {
      if (x == 'a') continue;
      if (c1 == mp[x]) c1--;
      else if (c2 == mp[x]) c2++;
      else {
         cout << "NO\n";
         return;
      }
   }
   cout << "YES\n";
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);

   int T = 1;
   cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}