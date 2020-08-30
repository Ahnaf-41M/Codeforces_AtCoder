#include<bits/stdc++.h>

#define pb   push_back
#define endl "\n"
#define ll   long long

#define W(t)            while(t--)
#define clr(a)          memset(a,0,sizeof(a))
#define rep(i,a,b)      for(i = a; i < b; i++)
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

vector<int> adj[300000];
int n, m;
bool vis[300000];

int dfs(int nd)
{
     int res=1;
     vis[nd] = true;

     for (auto ch : adj[nd])
          if (!vis[ch])
               res += dfs(ch);
     return res;
}
int main()
{
     IOS
#ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
#endif
     cin >> n >> m;
     int ans = 0;

     W(m)
     {
          int x, y; cin >> x >> y;
          adj[x].pb(y);
          adj[y].pb(x);
     }
     for (int i = 1; i <= n; i++)
          if (!vis[i])
               ans = max(dfs(i), ans);
     cout << ans << endl;
     return 0;
}