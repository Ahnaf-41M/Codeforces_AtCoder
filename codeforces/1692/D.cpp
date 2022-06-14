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

bool is_pal(string s)
{
    rep(i, 0, s.size() - 1) {
        if (s[i] != s[s.size() - i - 1])
            return false;
    }
    return true;
}
void Solve(int tc)
{
    string s;
    int x, ans = 0;

    map<string, int> mp;

    cin >> s >> x;

    int hh = 0, mm = 0;
    if (s[0] == '0') hh = s[1] - '0';
    else hh = (s[0] - '0') * 10 + (s[1] - '0');

    if (s[3] == '0') mm = s[4] - '0';
    else mm = (s[3] - '0') * 10 + (s[4] - '0');

    // cout << hh << " " << mm << "\n";

    int h1 = (x / 60), m1 = x % 60;
    while (true) {
        string tmp;
        if (hh < 10) tmp.pb('0');
        tmp += (to_string(hh) + ":");
        if (mm < 10) tmp.pb('0');
        tmp += (to_string(mm));

        if (mp[tmp]) break;
        if (is_pal(tmp)) ans++;

        mp[tmp]++;

        // int h2 = 0;
        if (mm + m1 > 59) hh++;
        hh = (hh + h1) % 24;
        mm = (mm + m1) % 60;
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