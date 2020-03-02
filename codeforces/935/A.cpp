#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n;
     cin>>n;
     set<int> s;

     for(int i = 1; i <= sqrt(n); i++)
     {
          if(n%i==0)
          {
               if(n/i==i)
               {
                    s.insert(i);
               }
               else
               {
                    s.insert(i);
                    s.insert(n/i);
               }
          }
     }
     cout<<s.size()-1<<endl;
}
