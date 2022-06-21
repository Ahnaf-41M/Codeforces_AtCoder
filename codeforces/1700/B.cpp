#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  MX           10000
#define  pb           push_back
#define  int          long long
#define  PII          pair<int,int>
#define  endl         "\n"
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

map<char, char> mp;

void Solve(int tc)
{
    int n;
    string s, ans;

    cin >> n >> s;

    if (s[0] < '9') {
        for (char ch : s) cout << ('9' - ch);
        cout << "\n";
    }
    else {
        int carry = 0;
        irep(i, n - 1, 0) {
            char ch = mp[s[i]];
            if (carry) {
                if (s[i] == '1') ch = '9';
                else ch--, carry = 0;
            }
            if ((ch + s[i] - 96 + carry) > 9) carry = 1;
            else carry = 0;
            ans.pb(ch);
        }
        reverse(all(ans));
        cout << ans << "\n";
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    mp['0'] = '1';
    mp['1'] = '0';
    rep(i, 2, 9) {
        char ch1 = i + 48, ch2 = (10 - i + 1) + 48;
        mp[ch1] = ch2;
    }

    int T = 1;
    cin >> T;

    for (int tc = 1; tc <= T; tc++) {
        Solve(tc);
    }

    return 0;
}