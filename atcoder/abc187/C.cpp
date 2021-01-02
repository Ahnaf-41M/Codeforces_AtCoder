#include<bits/stdc++.h>
#define ll    long long
#define pb    push_back
#define endl  "\n"
using namespace std;

int tt, n;
int main()
{
   ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
   map<string, int> mp, mp2;
   string s;

   cin >> n;

   while (n--) {
      cin >> s;
      if (s[0] == '!') {
         mp2[s.substr(1, s.size())]++;
         // mp[s.substr(1,s.size())]++;
      }
      else
         mp[s]++;

   }
   for (auto it : mp) {
      if (mp2[it.first]) {
         cout << it.first << endl;
         return 0;
      }
   }
   cout << "satisfiable\n";

   return 0;
}