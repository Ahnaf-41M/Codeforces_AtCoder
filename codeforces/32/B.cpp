#include<bits/stdc++.h>
using namespace std;

int main()
{
     int i;
     string s;

     cin>>s;

     for(i = 0; i < s.size(); i++)
     {
          if(s[i]=='.' && s[i-1]!='-')
          {
               cout<<0;
               s[i]='A';
          }
          else if(s[i]=='.' && s[i-1]=='-')
          {
               cout<<1;
               s[i]='A';
               s[i-1]='A';
          }
          else if(s[i]=='-' && s[i-1]=='-')
          {
               cout<<2;
               s[i]='A';
               s[i-1]='A';
          }
     }
     cout<<endl;

}
