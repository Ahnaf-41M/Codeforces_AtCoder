#include<bits/stdc++.h>

#define ff      first
#define ss      second
#define pb      push_back
#define ll      long long
#define MX      100005
#define inf     1000000
#define mod     1000000007
#define endl    "\n"

#define W(t)            while(t--)
#define all(v)          v.begin(),v.end()
#define ZERO(a)         memset(a,0,sizeof(a))
#define MINUS(a)        memset(a,-1,sizeof(a))
#define rep(i,a,b)      for(i = a; i < b; i++)
#define IOS             ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;

int main()
{
   int n, i, cnt = 0;
   cin >> n;

   for (int k = 1; k <= 1000000; k++)
   {
      if (k >= n)
         break;
      else
      {
         int tmp = n - k;

         for (int i = 1; i <= sqrt(tmp); i++)
            if (tmp % i == 0)
            {
               int d1 = i;
               int d2 = tmp / i;

               if (d1!=d2)
                  cnt += 2;
               else
                  cnt++;

            }

      }
   }
   cout << cnt;
}