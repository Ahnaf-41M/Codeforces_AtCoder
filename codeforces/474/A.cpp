#include<bits/stdc++.h>
using namespace std;

int main()
{
     int i;
     char s[]={'q','w','e','r','t','y','u','i','o','p',
     'a','s','d','f','g','h','j','k','l',';',
     'z','x','c','v','b','n','m',',','.','/'};
     char ch;
     char ss[100];
     cin>>ch>>ss;
     if(ch=='R'){
     for(i = 0; ss[i]!='\0'; i++)
     {
          for(int j = 0; j < 30; j++)
          {
               if(s[j]==ss[i])
               {
                    cout<<s[j-1];
                    break;
               }
          }
     }
     cout<<endl;
     }
     else
     {
          for(i = 0; ss[i]!='\0'; i++)
     {
          for(int j = 0; j < 30; j++)
          {
               if(s[j]==ss[i])
               {
                    cout<<s[j+1];
                    break;
               }
          }
     }
     cout<<endl;
     }

}
