#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  MX           100005
#define  pb           push_back
#define  int          long long
#define  PII          pair<int,int>
#define  all(v)       v.begin(),v.end()
using namespace std;

vector<int> adj[10];
void Solve(int tc)
{
    string s;
    int ans, n;

    cin >> s;
    n = s.size();
    ans = n - 1;

    for (int i = 0; i < n; i++) { adj[s[i] - '0'].pb(i); }
    for (int i = 0; i <= 9; i++) {
        if (adj[i].empty()) continue;
        ans = min(ans, n - (int)adj[i].size());
        for (int j = 0; j <= 9; j++) {
            int cnt = 0, cur_pos = adj[i][0];

            while (cur_pos < n) {
                auto pos = upper_bound(all(adj[j]), cur_pos);
                if (pos == adj[j].end()) break;
                cnt += 2;
                pos = upper_bound(all(adj[i]), (*pos));
                if (pos == adj[i].end()) break;
                cur_pos = (*pos);
            }
            ans = min(ans, n - cnt);
        }
    }
    cout << ans << "\n";
    for (int i = 0; i <= 9; i++) { adj[i].clear();}
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