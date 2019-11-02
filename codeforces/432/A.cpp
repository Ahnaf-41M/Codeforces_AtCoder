 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     int n,k,i,c=0;

     cin>>n>>k;
     int a[n];

     for(i=0;i<n;i++)
     {
         cin>>a[i];
         if(5-a[i]>=k)
            c++;
     }
     cout<<c/3<<endl;

     return 0;

 }
