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

map<char, int> mp;
void Solve(int tc)
{
    string s1, s2;
    cin >> s1 >> s2;

    if (s1.back() == s2.back()) {
        if (s1.back() == 'L' || s1.back() == 'M') {
            if (s1 > s2) cout << ">";
            else if (s1 < s2) cout << "<";
            else cout << "=";
        }
        else {
            if (s1 > s2) cout << "<";
            else if (s1 < s2) cout << ">";
            else cout << "=";
        }
        cout << "\n";
    }
    else {
        if (mp[s1.back()] < mp[s2.back()]) cout << "<";
        else if (mp[s1.back()] > mp[s2.back()]) cout << ">";
        else cout << "=";
        cout << "\n";
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    mp['S'] = 1, mp['M'] = 2, mp['L'] = 3;
    int T = 1;
    cin >> T;

    for (int tc = 1; tc <= T; tc++) {
        Solve(tc);
    }

    return 0;
}