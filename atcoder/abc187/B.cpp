#include<bits/stdc++.h>
#define ll    long long
#define pb    push_back
#define endl  "\n"
using namespace std;

int tt, n;
int main()
{
   ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
   cin >> n;
   vector<pair<int,int>> v;
   int cnt = 0;
   while(n--)
   {
      int x,y;
      cin >> x>>y;
      v.pb({x,y});
   }
   for(int i = 0; i < v.size(); i++){
      for(int j = i+1; j < v.size(); j++){
         double slp = (double)(v[j].second-v[i].second)/(double)(v[j].first-v[i].first);
         if(slp >= -1.0 &&slp <= 1.0)
            cnt++;
      }
   }
   cout << cnt;
   return 0;
}