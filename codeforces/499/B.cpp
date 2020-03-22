#include<bits/stdc++.h>
using namespace std;

int main()
{
     string s1,s2;
     map<string,string> mp;
     int n,m;

     cin>>n>>m;

     while(m--)
     {
          cin>>s1>>s2;
          mp[s1] = s2;
     }
     while(n--)
     {
          cin>>s1;
          s2 = mp[s1];

          if(s1.size()>s2.size())
               cout<<s2<<" ";
          else
               cout<<s1<<" ";
     }
     cout<<endl;

}
