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

vector<string> v;

void bfs()
{
   queue<string> q;
   for (char ch = 'a'; ch <= 'z'; ch++) {
      string s;
      s += ch, q.push(s);
   }

   while (!q.empty()) {
      string cur = q.front();
      q.pop();
      v.pb(cur);
      if (cur.size() == 3) continue;

      for (char ch = 'a'; ch <= 'z'; ch++) {
         string s = cur + ch;
         q.push(s);
      }
   }
}
void Solve(int tc)
{
   string s;
   int n;
   map<string, int> mp;

   cin >> n >> s;

   rep(i, 0, n - 1) {
      string cur;
      cur += s[i], mp[cur]++;
      rep(j, i + 1, n - 1) {
         cur += s[j];
         mp[cur]++;
      }
   }

   for (string s : v) {
      if (!mp[s]) {
         cout << s << "\n";
         return;
      }
   }
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   bfs();
   //cout << v.size() << " " << v[0] << " " << v[26];
   int T = 1;
   cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}