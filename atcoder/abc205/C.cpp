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
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b) cout << "=";
    else if (a < 0 || b < 0) {
        if (b < 0 && a < 0) {
            if (c & 1) {
                if (a < b) cout << "<";
                else cout << ">";
            }
            else if (abs(a) == abs(b)) cout << "=";
            else {
                if (abs(a) > abs(b)) cout << ">";
                else cout << "<";
            }
        }
        else if (a < 0) {
            if (c & 1) cout << "<";
            else if (abs(a) == abs(b)) cout << "=";
            else {
                if (abs(a) > abs(b)) cout << ">";
                else cout << "<";
            }
        }
        else {
            if (c & 1) cout << ">";
            else if (abs(a) == abs(b)) cout << "=";
            else {
                if (abs(a) > abs(b)) cout << ">";
                else cout << "<";
            }
        }
    }
    else if (a > b) cout << ">";
    else cout << "<";
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T = 1;
    // cin >> T;

    for (int tc = 1; tc <= T; tc++) {
        Solve(tc);
    }

    return 0;
}