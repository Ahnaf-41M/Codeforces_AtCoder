#include <bits/stdc++.h>
#include <ext/rope>

#define  pb            push_back
#define  int           long long
#define  endl          "\n"
#define  MX            200005

#define  all(v)        v.begin(),v.end()
#define  gcd(a,b)      __gcd(a,b)
#define  lcm(a,b)      (a*b)/gcd(a,b)
#define  rep(i,a,b)    for(int i = a; i <= b; i++)
#define  irep(i,b,a)   for(int i = b; i >= a; i--)

using namespace std;
using namespace __gnu_cxx;

int mod = 1e9 + 7;
int nxt[MX + 5];
multiset<int> Prm_frq[MX];
map<int, int> cnt_div[MX];
int ans = 1, n, q;

void Sieve()
{
   for (int i = 2; i <= MX; i++) {
      if (!nxt[i]) {
         nxt[i] = i;
         for (int j = i * i; j <= MX; j += i)
            nxt[j] = i;
      }
   }
}
void Add(int i, int x)
{
   while (x != 1) {
      int div = nxt[x], cnt = 0;

      //dividing x by its prime factors
      while (nxt[x] == div)  
         cnt++, x /= nxt[x];

      int lst_cnt = cnt_div[i][div]; //last freq of the div of the i'th number
      cnt_div[i][div] += cnt; //adding the new freq to the i'th number

      int lst_min = 0; //stores the minimum freq of the div
      if (Prm_frq[div].size() == n)
         lst_min = *Prm_frq[div].begin();

      if (lst_cnt) //erasing the last count of the div of i'th number
         Prm_frq[div].erase(Prm_frq[div].find(lst_cnt));
      Prm_frq[div].insert(cnt_div[i][div]); //adding new count

      if (Prm_frq[div].size() == n) {
      // if the div is present in all the n elements
         for (int j = lst_min + 1; j <= *Prm_frq[div].begin(); j++)
            ans = ans * div % mod;
      }
   }
}
void Solve()
{
   Sieve();
   cin >> n >> q;

   rep(i, 1, n) {
      int x; cin >> x;
      Add(i, x);
   }
   while (q--) {
      int i, x;
      cin >> i >> x;
      Add(i, x);
      cout << ans << endl;
   }
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   //int T;
   //cin >> T;

   //while (T--)
   Solve();

   return 0;
}