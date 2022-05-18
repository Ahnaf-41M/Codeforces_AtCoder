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

int frq1[27], frq2[27][51];
void Solve(int tc)
{
    int n;
    string ans;
    cin >> n;

    rep(i, 1, n) {
        string s; cin >> s;
        for (char ch : s) {
            if (!frq2[ch - 'a'][i]) frq1[ch - 'a']++;
            frq2[ch - 'a'][i]++;
        }
    }
    for (char ch = 'a'; ch <= 'z'; ch++) {
        if (frq1[ch - 'a'] == n) {
            int mn = 100;
            rep(i, 1, n) mn = min(mn, frq2[ch - 'a'][i]);
            while (mn-- > 0 && mn != 100) ans.pb(ch);
        }
    }
    cout << ans << "\n";

}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T = 1;
    //cin >> T;

    for (int tc = 1; tc <= T; tc++) {
        Solve(tc);
    }

    return 0;
}