#include<bits/stdc++.h>

#define gcd(a,b)     __gcd(a,b)
#define lcm(a,b)     (a*(b/gcd(a,b)))

#define pb   push_back
#define endl "\n"

#define ll  long long
#define ull unsigned long long

#define W(t)            while(t--)
#define rep(i,n)      for(i = 0; i < n; i++)
#define repit(it,type)  for(auto it = type.begin(); it != type.end(); it++)
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

int main()
{
     IOS
#ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
#endif
     int t;

     cin >> t;
     W(t)
     {
          int n, cur = 0, i;
          string s;
          ll ans = 0;
          map<int, int> freq;
          freq[0]++;

          cin >> n >> s;
          rep(i, s.size())
          {
               cur += (s[i] - '0') - 1;
               ans += freq[cur];
               freq[cur]++;
          }
          cout << ans << endl;
     }

     return 0;
}