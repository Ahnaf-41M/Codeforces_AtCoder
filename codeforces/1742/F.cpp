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
    string s = "a", t = "a";
    int c1[26] = {}, c2[26] = {};
    c1[0] = c2[0] = 1;

    char mnCh = 'a', mxCh = 'a';

    int n;
    cin >> n;
    while (n--) {
        int d, k;
        string s;
        cin >> d >> k >> s;
        if (d == 1) {
            for (char ch : s) {
                mnCh = min(mnCh, ch);
                c1[ch - 'a'] += k;
            }
        }
        else {
            for (char ch : s) {
                mxCh = max(mxCh, ch);
                c2[ch - 'a'] += k;
            }
        }
        // cout << mnCh << " " << mxCh << " ";
        if (mnCh < mxCh) cout << "YES\n";
        else {
            bool ok = 1;
            for (int i = 25; i >= 0 ; i--) {

                if (c1[i] && c1[i] >= c2[i]) {
                    // cout << c1[i] << " " << c2[i] << " ";
                    ok = 0;
                    break;
                }
            }
            cout << (ok ? "YES\n" : "NO\n");
        }
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