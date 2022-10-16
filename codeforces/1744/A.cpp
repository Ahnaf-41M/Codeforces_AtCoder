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

void Solve(int tc)
{
    int n;
    string s;
    map<char, vector<int>> adj;
    map<int, int> done;

    cin >> n;
    int ar[n];
    for (int &x : ar) cin >> x;

    cin >> s;
    rep(i, 0, n - 1) {
        adj[s[i]].pb(ar[i]);
    }
    for (char ch = 'a'; ch <= 'z'; ch++) {
        map<int, int> cur;
        for (int x : adj[ch]) {
            if (done[x]) {
                cout << "NO\n";
                return;
            }
            cur[x]++;

        }
        for (auto x : cur) done[x.ff]++;
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