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
    int n, q;
    cin >> n >> q;

    vector<int> v1(n), ans(q);
    vector<PII> v2(q);

    for (int &x : v1) cin >> x;
    for (int i = 0; i < q; ++i)
    {
        int x; cin >> x;
        v2.pb({x, i});
    }
    sort(all(v2));
    reverse(all(v2));

    int sum = 0;
    for (int x : v1) {
        while (!v2.empty() && x > v2.back().ff) {
            ans[v2.back().ss] = sum;
            v2.pop_back();
        }
        sum += x;
    }
    while (!v2.empty()) {
        ans[v2.back().ss] = sum;
        v2.pop_back();
    }


    for (int x : ans) cout << x << " ";
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