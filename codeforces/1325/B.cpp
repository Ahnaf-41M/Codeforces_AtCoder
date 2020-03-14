#include<bits/stdc++.h>
using namespace std;

int main()
{
     set<int> s;
     int t,n,c;
     cin>>t;

     while(t--)
     {
          cin>>n;
          for(int i = 0; i< n; i++)
          {
               cin>>c;
               s.insert(c);
          }
          cout<<s.size()<<endl;
          s.clear();
     }
}
