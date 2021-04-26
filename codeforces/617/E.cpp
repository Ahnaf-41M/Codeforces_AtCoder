#include<bits/stdc++.h>
#define  MX      100005
#define  ff      first
#define  ss      second
#define  pb      push_back
#define  int     long long
#define  PII     pair<int,int>
#define  all(v)  v.begin(),v.end()
using namespace std;

int n, m, k;
int ar[MX], cnt[3000005], ans[MX], pref[MX];
int block = 700, res;
struct Query
{
   int L, R, ind;
} Q[MX];

bool cmp(Query x, Query y)
{
   if (x.L / block != y.L / block)
      return x.L < y.L;
   return x.R < y.R;
}
void Add(int val)
{
   res += cnt[k ^ val];
   cnt[val]++;
}
void Remove(int val)
{
   cnt[val]--;
   res -= cnt[k ^ val];
}
void AnswerQueries()
{
   int cur_L = 0, cur_R = 0;

   for (int i = 1; i <= m; i++) {
      int left = Q[i].L, right = Q[i].R;

      while (cur_L > left) cur_L--, Add(pref[cur_L]);
      while (cur_R < right) Add(pref[cur_R]), cur_R++;

      while (cur_L < left) Remove(pref[cur_L]), cur_L++;
      while (cur_R > right) cur_R--, Remove(pref[cur_R]);

      ans[Q[i].ind] = res;
   }
   for (int i = 1; i <= m; i++)
      cout << ans[i] << "\n";
}
signed main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   /*When we add an element to the window, suppose element A[x] is
   inserted in the window, where x is the indice added and y = prefix[x] ^ k,
   then ans += (cnt[y]). We do this because cnt[y] stores all the elements in
   the current window having prefix xor equal to y. And if we do xor of
   prefix[x] with any of these elements then the resultant xor will be k. While
   adding and removing you also need to constantly update cnt[] array.*/

   cin >> n >> m >> k;
   for (int i = 1; i <= n; i++) {
      cin >> ar[i];
      pref[i] = pref[i - 1] ^ ar[i];
   }

   for (int i = 1; i <= m; i++) {
      cin >> Q[i].L >> Q[i].R;
      Q[i].L--, Q[i].R++; //xor from i to j is pref[i-1]^pref[j]
      Q[i].ind = i;
   }
   sort(Q + 1, Q + 1 + m, cmp);
   AnswerQueries();

   return 0;
}