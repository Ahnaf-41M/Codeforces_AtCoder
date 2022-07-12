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
    int n;
    cin >> n;

    vector<int> v(n);
    for (int &x : v) cin >> x;

    for (int &x : v) {
        int m;
        string s;
        cin >> m >> s;
        for (char ch : s) {
            if (ch == 'D') {
                if (x == 9) x = 0;
                else x++;
            }
            else {
                if (x == 0) x = 9;
                else x--;
            }
        }
    }
    for (int x : v) cout << x << " ";
    cout << "\n";
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