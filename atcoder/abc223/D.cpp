#include<bits/stdc++.h>
using namespace std;
#define MX 100005
vector<int> res, adj[2 * MX];
int indeg[2 * MX], done[2 * MX], color[2 * MX];
int n, m, ok = 1;

void Kahn()
{
   // queue<int> Q;
   priority_queue<int, vector<int>, greater<int> > Q;

   for (int i = 1; i <= n; i++)
      if (indeg[i] == 0)
         Q.push(i);

   while (!Q.empty()) {
      int fr = Q.top();
      res.push_back(fr);
      Q.pop();

      for (auto x : adj[fr]) {
         indeg[x]--;
         if (indeg[x] == 0)
            Q.push(x);
      }
   }

   for (auto x : res) {
      cout << x << " ";
      done[x]++;
   }
   for (int i = 1; i <= n; i++)
      if (!done[i]) cout << i << " ";

}
void DFS(int nd)
{
   color[nd] = 1;

   for (auto x : adj[nd])
   {
      if (!color[x])
         DFS(x);
      else if (color[x] == 1)
      {
         ok = false;
         return;
      }
   }
   if (!ok)
      return;
   color[nd] = 2;
}
int main()
{
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
   cin >> n >> m;

   for (int i = 0; i < m; i++) {
      int x, y;
      cin >> x >> y;
      adj[x].push_back(y);
      indeg[y]++;
   }
   // for (int i = 1; i <= n; i++) sort(adj[i].begin(), adj[i].end());
   for (int i = 1; i <= n; ++i)
      if (!color[i])
         DFS(i);
   if (!ok) cout << -1;
   else Kahn();
}