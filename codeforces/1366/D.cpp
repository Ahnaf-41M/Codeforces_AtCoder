#include<bits/stdc++.h>
#define  MX      10000005
#define  ff      first
#define  ss      second
#define  pb      push_back
#define  int     long long
#define  PII     pair<int,int>
#define  all(v)  v.begin(),v.end()
using namespace std;

int mnPrime[MX + 5];
vector<int> primes;
vector<pair<int, int>> ans;
int ar[500005];

void Sieve()
{
   mnPrime[1] = 1;
   for (int i = 2; i <= MX; i++) {
      if (mnPrime[i] == 0) {
         mnPrime[i] = i;
         for (int j = i * i; j <= MX; j += i)
            mnPrime[j] = i;
      }
   }
}
vector<int> Factorize(int n)
{
   int j = 0;
   vector<int> factors;
   while (n > 1) {
      int pp = mnPrime[n];
      factors.pb(pp);
      while (n % pp == 0)
         n /= pp;
   }
   return factors;
}
signed main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   Sieve();
   int n;
   
   cin >> n;
   for (int i = 0; i < n; i++)
      cin >> ar[i];

   for (int i = 0; i < n; i++) {
      vector<int> divs;

      divs = Factorize(ar[i]);

      if (divs.size() <= 1)
         ans.pb({ -1, -1});
      else {
         int d1 = divs[0];
         int d2 = divs[1];
         for (int i = 2; i < divs.size(); i++)
            d2 *= divs[i];
         ans.pb({d1, d2});
      }
   }

   for (auto it : ans)
      cout << it.ff << " ";
   cout << endl;
   for (auto it : ans)
      cout << it.ss << " ";

   return 0;
}