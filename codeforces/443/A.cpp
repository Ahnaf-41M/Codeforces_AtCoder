    #include<bits/stdc++.h>
    using namespace std;
     
    int main()
    {
        int a[27];
        for(int i = 0;i < 27; i++)
        {
            a[i]=0;
        }
        string s;
        int sum=0;
     
        getline(cin,s,'\n');
        for(int i = 0; s[i]!='\0'; i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                if(a[s[i]-97]==0){
                a[s[i]-97]++;
                sum++;}
            }
        }
        cout<<sum<<endl;
     
    }