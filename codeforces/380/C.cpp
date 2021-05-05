#include<bits/stdc++.h>
#define  MX      1000005
#define  ff      first
#define  ss      second
#define  pb      push_back
#define  int     long long
#define  PII     pair<int,pair<int,int> >
#define  all(v)  v.begin(),v.end()
using namespace std;

string s;
int l_rem, r_rem;
struct info
{
   int L, R, tot;
} tree[3 * MX];

void build(int node, int b, int e)
{
   if (b == e) {
      tree[node].L = (s[b] == '(');
      tree[node].R = (s[b] == ')');
      return;
   }
   int left = node << 1;
   int right = left + 1;
   int mid = (b + e) >> 1;

   build(left, b, mid);
   build(right, mid + 1, e);

   int new_tot = min(tree[left].L, tree[right].R);
   int new_L = tree[left].L + tree[right].L - new_tot;
   int new_R = tree[left].R + tree[right].R - new_tot;
   new_tot *= 2; //as length of a matched parenthesis "()" is 2.
   new_tot += (tree[left].tot + tree[right].tot);

   tree[node].L = new_L, tree[node].R = new_R;
   tree[node].tot = new_tot;
}
PII Query(int node, int b, int e, int l, int r)
{
   if (b > r || e < l) return {0, {0, 0}};
   if (l <= b && e <= r) {
      // l_rem += tree[node].L, r_rem += tree[node].R;
      return {tree[node].tot, {tree[node].L, tree[node].R}};
   }

   int left = node << 1;
   int right = left + 1;
   int mid = (b + e) >> 1;

   PII res1 = Query(left, b, mid, l, r);
   PII res2 = Query(right, mid + 1, e, l, r);

   int mn = min(res1.ss.ff, res2.ss.ss);
   int cur_tot = res1.ff + res2.ff + 2 * mn;
   int cur_L = res1.ss.ff + res2.ss.ff - mn;
   int cur_R = res1.ss.ss + res2.ss.ss - mn;

   return {cur_tot, {cur_L, cur_R}} ;
}
signed main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int n;
   cin >> s;
   n = s.size();
   s = ' ' + s;

   build(1, 1, n);

   int q;
   cin >> q;
   while (q--) {
      int l, r;
      cin >> l >> r; //highest length of the matched bracket subseq from l to r
      PII ans = Query(1, 1, n, l, r);
      cout << ans.ff << endl;
      l_rem = r_rem = 0;
   }

   return 0;
}