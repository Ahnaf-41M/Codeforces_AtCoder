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
    int n, m;
    char f;
    string s1, s2;
    cin >> n >> m;
    cin >> s1 >> s2;

    int i = n - 1, j = m - 1;

    while (i >= 0 && j >= 0 && s1[i] == s2[j])
        i--, j--;

    if (j == -1) {
        cout << "YES\n";
        return;
    }
    if (j > 0) {
        cout << "NO\n";
        return;
    }
    while (i >= 0) {
        if (s1[i] == s2[0]) {
            cout << "YES\n";
            return;
        }
        i--;
    }
    cout << "NO\n";


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