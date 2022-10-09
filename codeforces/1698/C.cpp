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
    vector<int> pos, neg, v;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        if (x > 0) pos.pb(x);
        else if (x < 0) neg.pb(x);
        else if (v.size() < 2) v.pb(x);
    }

    if (pos.size() > 2 || neg.size() > 2) cout << "NO\n";
    else {
        for (int x : neg) v.pb(x);
        for (int x : pos) v.pb(x);

        for (int i = 0; i < v.size(); i++) {
            for (int j = i + 1; j < v.size(); j++) {
                for (int k = j + 1; k < v.size(); k++) {
                    bool ok = 0;
                    for (int l = 0; l < v.size(); l++) {
                        if (v[i] + v[j] + v[k] == v[l]) {
                            ok = 1;
                            break;
                        }
                    }
                    if (!ok) {
                        cout << "NO\n";
                        return;
                    }
                }
            }
        }
        cout << "YES\n";
    }

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