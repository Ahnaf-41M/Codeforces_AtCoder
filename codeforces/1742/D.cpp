#include <bits/stdc++.h>
#define  ff           first
#define  ss           second
#define  MX           100005
#define  pb           push_back
#define  int          long long
#define  PII          pair<int,int>
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

vector<int> adj[1005];
void Solve(int tc)
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        adj[x].pb(i);
    }
    int ans = 0;
    for (int i = 1; i <= 1000; i++) {
        for (int j = 1; j <= 1000; j++) {
            if (adj[i].size() && adj[j].size() && __gcd(i, j) == 1) {
                ans = max(ans, adj[i].back() + adj[j].back());
            }
        }
    }
    if (!ans) cout << "-1\n";
    else cout << ans << "\n";
    for (int i = 1; i <= 1000; i++) adj[i].clear();
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