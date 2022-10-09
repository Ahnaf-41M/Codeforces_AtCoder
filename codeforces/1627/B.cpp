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

int n, m;

int Calc(int a, int b, int c, int d)
{
    return abs(a - c) + abs(b - d);
}
bool cmp(pair<PII, int> x, pair<PII, int> y)
{
    return x.ss < y.ss;
}
void Solve(int tc)
{
    cin >> n >> m;
    vector<pair<PII, int> > v;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            int val = max({Calc(i, j, 1, 1), Calc(i, j, n, 1), Calc(i, j, 1, m), Calc(i, j, n, m)});
            v.pb({{i, j}, val});
        }
    }
    sort(all(v), cmp);
    for (int i = 0; i < v.size(); i++)
        cout << v[i].ss << " ";
    cout << "\n";
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