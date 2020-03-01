#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,c1=1,c2=0,i,j;
    int x[3][3];
    for(i = 0; i < 3; i++)
    {
         for(j = 0; j < 3; j++)
         {
              cin>>x[i][j];
         }
    }
    cin>>c;
    int y[c];

    for(i = 0; i < c; i++)
     cin>>y[i];
     sort(y,y+c);

     if(binary_search(y,y+c,x[0][0]))
     {
          if(binary_search(y,y+c,x[1][1]))
          {
               if(binary_search(y,y+c,x[2][2]))
                    {
                         c2=1;
                         cout<<"Yes\n";
                    }
          }
     }
     if(c2!=1){
     if(binary_search(y,y+c,x[0][2]))
     {
          if(binary_search(y,y+c,x[1][1]))
          {
               if(binary_search(y,y+c,x[2][0]))
                    {
                         c2=1;
                         cout<<"Yes\n";
                    }
          }
     }
     }
     if(c2!=1){
     for(i = 0; i < 3; i++)
     {
          for(j = 0; j < 1; j++)
          {
               if(binary_search(y,y+c,x[i][j]))
               {
                    if(binary_search(y,y+c,x[i][j+1]))
                    {
                         if(binary_search(y,y+c,x[i][j+2]))
                         {
                              cout<<"Yes\n";
                              c2=1;
                              break;
                         }
                    }
               }

          }
          if(c2==1)
               break;
     }
     }
     if(c2!=1){
     for(i = 0; i < 1; i++)
     {
          for(j = 0; j < 3; j++)
          {
               if(binary_search(y,y+c,x[i][j]))
               {
                    if(binary_search(y,y+c,x[i+1][j]))
                    {
                         if(binary_search(y,y+c,x[i+2][j]))
                         {
                              cout<<"Yes\n";
                              c2=1;
                              break;
                         }
                    }
               }
         }
         if(c2==1)
          break;

     }

     if(c2!=1)
          cout<<"No\n";
     }
}


