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

int n, k;
string s;

int Work(char ch)
{
    int cur = 0, k2 = k, ans = 0;
    int i = 0, j = 0;

    // cout << ch << ":\n";
    while (i < n) {
        if (s[i] == ch) cur++; 
        else {
            while (j <= i && !k2) {
                if (s[j] != ch) k2++;
                cur--, j++;
            }
            if (k2) cur++, k2--;
        }
        // cout << cur << " " << k2 << "\n";
        ans = max(ans, cur);
        i++;
    }
    return ans;
}
void Solve(int tc)
{
    cin >> n >> k >> s;
    cout << max(Work('a'), Work('b')) << "\n";
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T = 1;
    // cin >> T;

    for (int tc = 1; tc <= T; tc++) {
        Solve(tc);
    }

    return 0;
}