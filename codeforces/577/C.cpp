#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  MX           1005
#define  pb           push_back
#define  int          long long
#define  PII          pair<int,int>
#define  endl         "\n"
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

int OK[MX];
vector<int> v;
void Sieve()
{
    OK[2] = 1;
    for (int i = 3; i < MX; i += 2)
        OK[i] = 1;
    for (int i = 3; i * i < MX; i += 2)
        if (OK[i])
            for (int j = i * i; j < MX; j += i)
                OK[j] = 0;
    v.pb(2);
    for (int i = 3; i < MX; i += 2)
        if (OK[i])
            v.pb(i);
}
void Solve(int tc)
{
    int n;
    vector<int> ans;
    cin >> n;

    for (int x : v) {
        if (x > n) break;
        int cur = x;
        while (cur <= n) {
            ans.pb(cur);
            cur *= x;
        }
    }
    cout << ans.size() << "\n";
    for (int x : ans) cout << x << " ";
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    Sieve();
    int T = 1;
    //cin >> T;

    for (int tc = 1; tc <= T; tc++) {
        Solve(tc);
    }

    return 0;
}