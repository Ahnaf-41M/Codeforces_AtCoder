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
    char s[8][8];
    rep(i, 0, 7) {

        rep(j, 0, 7) {
            cin >> s[i][j];
        }
    }

    rep(i, 1, 6) {
        bool ok = 1;
        rep(j, 1, 6) {
            int k1 = i, k2 = j;
            ok = 1;
            while (k1 >= 0 && k2 <= 7 && s[k1][k2] == '#')
                k1--, k2++;
            if (k1 != -1 && k2 != 8) ok = 0;

            k1 = i, k2 = j;
            while (k1 >= 0 && k2 >= 0 && s[k1][k2] == '#')
                k1--, k2--;
            if (k1 != -1 && k2 != -1) ok = 0;

            k1 = i, k2 = j;
            while (k1 <= 7 && k2 >= 0 && s[k1][k2] == '#')
                k1++, k2--;
            if (k2 != -1 && k1 != 8) ok = 0;

            k1 = i, k2 = j;
            while (k1 <= 7 && k2 <= 7 && s[k1][k2] == '#')
                k1++, k2++;
            if (k2 != 8 && k1 != 8) ok = 0;

            if (ok) {
                cout << i + 1 << " " << j + 1 << "\n";
                return;
            }

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