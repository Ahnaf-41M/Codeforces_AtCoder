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

bool done[MX];
vector<int> adj[MX];
int n, ar[MX], ans = 0;

void Clear()
{
    rep(i, 1, n) {
        done[i] = 0;
        while (!adj[i].empty()) adj[i].pop_back();
    }
    ans = 0;
}
void Solve(int tc)
{
    cin >> n;
    rep(i, 1, n) cin >> ar[i];

    int j = n;
    adj[ar[n]].pb(n);
    while (j - 1 >= 1 && ar[j] >= ar[j - 1]) {
        j--;
        adj[ar[j]].pb(j);
    }
    j--;

    // cout << j << "\n";
    while (j >= 1) {
        if (ar[j] && !done[ar[j]]) {
            ans++;
            done[ar[j]] = 1;
        }
        while (!adj[ar[j]].empty()) {
            ar[adj[ar[j]].back()] = 0;
            adj[ar[j]].pop_back();
        }
        ar[j] = 0;
        j--;
    }

    j = n;
    while (j - 1 >= 1 && ar[j] >= ar[j - 1])
        j--;
    j--;

    // cout << ans << " " << j << "\n";
    while (j >= 1) {
        if (ar[j] && !done[ar[j]]) {
            ans++;
            done[ar[j]] = 1;
        }
        j--;
    }

    cout << ans << "\n";

    Clear();
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