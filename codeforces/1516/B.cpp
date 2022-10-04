#include "bits/stdc++.h"
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
    cin >> n;

    vector<int> ar(n), pref(n + 1);
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
        pref[i + 1] = pref[i] ^ ar[i];
    }
    if (pref[n] == 0) cout << "YES\n";
    else {
        //......,1,....,0,......1
        int val = pref[n], pos = 1;
        while (pos < n && pref[pos] != val)
            pos++;
        for (int i = pos + 1; i <= n; i++) {
            if (pref[i] == 0) {
                cout << "YES\n";
                return;
            }
        }
        cout << "NO\n";
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