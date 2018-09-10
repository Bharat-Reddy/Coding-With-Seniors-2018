#include<bits/stdc++.h>    //#include<stdio.h>
using namespace std;       // You don't have this in C
int main()
{
    int t;
    cin>>t;   //scanf("%d",&t);
    while(t--)
    {
        string s1,s2;    //char s1[1000],s2[1000];
        cin>>s1>>s2;
        int a[26],b[26];
        memset(a,0,sizeof(a));   //for(i=0;i<26;i++) a[i]=0;
        memset(b,0,sizeof(b));   ////for(i=0;i<26;i++) b[i]=0;
        int i;
        for(i=0;i<s1.length();i++)   // for(i=0;i<strlen(s1);i++)
            a[s1[i]-97]++;
        for(i=0;i<s2.length();i++)   // for(i=0;i<strlen(s2);i++)
            b[s2[i]-97]++;
        int ans=0;
        for(i=0;i<26;i++)
        ans+=abs(a[i]-b[i]);
        cout<<ans<<endl;  //printf("%d\n",ans);
    }
    return 0;
}
