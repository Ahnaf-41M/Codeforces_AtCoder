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
    char s[8][8];
    for (int i = 0; i < 8; i++) for (int j = 0; j < 8; j++) cin >> s[i][j];

    for (int i = 0; i < 8; ++i)
    {
        int j = 0, ok = 0;
        char ch = s[i][0];
        if (ch != 'R') continue;
        char ch2 = 'B';
        while (j < 8 && s[i][j] == ch) {
            if ((i - 1 >= 0 && s[i - 1][j] == ch2) || (i + 1 < 8 && s[i + 1][j] == ch2))
                ok = 1;
            j++;
        }
        if (j == 8 && ok) {
            cout << ch << "\n";
            return;
        }
    }
    for (int j = 0; j < 8; ++j)
    {
        int i = 0, ok = 0;
        char ch = s[0][j];
        if (ch != 'B') continue;
        char ch2 = 'R';
        while (i < 8 && s[i][j] == ch) {
            if ((j - 1 >= 0 && s[i][j - 1] == ch2) || (j + 1 < 8 && s[i][j + 1] == ch2))
                ok = 1;
            i++;
        }
        if (i == 8 && ok) {
            cout << ch << "\n";
            return;
        }
    }
    rep(i, 0, 7) rep(j, 0, 7) {
        if (s[i][j] == 'B' || s[i][j] == 'R') {
            cout << s[i][j] << "\n";
            return;
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