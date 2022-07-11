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
    string s, t;
    cin >> s >> t;

    int i = 0, j = 0, n = s.size(), m = t.size();

    if (n > m) {
        cout << "No\n";
        return;
    }
    while (i < n) {
        int c1 = 1, c2 = 1;
        if (s[i] != t[j]) {
            cout << "No\n";
            return;
        }
        while (i + 1 < n && s[i + 1] == s[i])
            i++, c1++;
        while (j + 1 < m && t[j + 1] == t[j])
            j++, c2++;
        if (c1 > c2 || (c1 == 1 && c1 != c2)) {
            cout << "No\n";
            return;
        }
        i++, j++;
    }
    cout << (i == n && j == m ? "Yes\n" : "No\n");
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