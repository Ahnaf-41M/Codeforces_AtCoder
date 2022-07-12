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

void Solve(int tc)
{
    int n;
    string ans;
    map<string, int> mp;

    cin >> n;
    vector<string> v(n);

    for (string &x : v) {
        cin >> x;
        mp[x]++;
    }

    for (string s : v) {
        int i = 0, m = s.size(), ok = 0;
        string cur;

        while (i < m) {
            cur.pb(s[i]);
            string tmp = s.substr(i + 1, m);

            // cout << cur << " " << tmp << "\n";
            if (mp[cur] && mp[tmp]) {
                ok = 1;
                break;
            }
            i++;
        }
        if (ok) ans.pb('1');
        else ans.pb('0');
    }
    cout << ans << "\n";
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