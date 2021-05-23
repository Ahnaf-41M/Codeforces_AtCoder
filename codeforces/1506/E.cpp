#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  pb           push_back
#define  MX           100005
#define  int          long long
#define  PII          pair<int,int>
#define  endl         "\n"
#define  gcd(a,b)     __gcd(a,b)
#define  lcm(a,b)     (a*b)/gcd(a,b)
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

int n;
void Min_Array(vector<int> v, set<int> nums, vector<int> &mn)
{
   int i = 0;
   while (i < n) {
      int x = v[i], j = i + 1;
      mn.pb(x), nums.erase(x);

      while (j < n && x == v[j] && !nums.empty()) {
         auto it = nums.begin();
         mn.pb(*it), nums.erase(it);
         j++;
      }
      i = j;
   }
}
void Max_Array(vector<int> v, set<int> nums, vector<int> &mx)
{
   int i = 0;
   vector<int> last;

   while (i < n) {
      int x = v[i], j = i;

      while (!nums.empty()) {
         auto it = nums.begin();
         if (*it > x) break;
         last.pb(*it), nums.erase(it);
      }
      while (j < n && v[j] == x) {
         mx.pb(last.back()), last.pop_back();
         j++;
      }
      i = j;
   }
}
void Solve(int tc)
{
   vector<int> v, mx, mn;
   set<int> nums;

   cin >> n;
   rep(i, 1, n) {
      int x; cin >> x;
      nums.insert(i);
      v.pb(x);
   }

   Min_Array(v, nums, mn);
   Max_Array(v, nums, mx);

   for (int x : mn) cout << x << " ";
   cout << "\n";
   for (int x : mx) cout << x << " ";
   cout << "\n";
   return;
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int T = 1;
   cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      Solve(tc);
   }

   return 0;
}