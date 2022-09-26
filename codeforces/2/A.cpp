#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  MX           100005
#define  pb           push_back
#define  int          long long
#define  PII          pair<int,int>
#define  all(v)       v.begin(),v.end()
using namespace std;

void Solve(int tc)
{
    int n, mxScore = 0, indx = 1e9;
    string ans;
    map<string, vector<PII> > mp;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        string name;
        int score;
        cin >> name >> score;

        PII cur = {0, 0};
        if (!mp[name].empty()) cur = mp[name].back();
        cur.ff += score, cur.ss = i;
        mp[name].pb(cur);

        // cout << name << " " << cur.ff << "\n";
    }
    for (auto it : mp) mxScore = max(mxScore, mp[it.ff].back().ff);

    for (auto vp : mp) {
        // cout << it.ff << " " << it.ss.ff << "\n";

        string curName = vp.ff;
        // cout << curName << "\n";
        if (mp[curName].back().ff == mxScore) {
            for (auto it : vp.ss) {
                if (it.ff >= mxScore && it.ss < indx) {
                    indx = it.ss;
                    ans = curName;
                }
            }

        }
    }

    cout << ans << "\n";
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
    int T = 1;
    //cin >> T;

    for (int tc = 1; tc <= T; tc++) {
        Solve(tc);
    }

    return 0;
}