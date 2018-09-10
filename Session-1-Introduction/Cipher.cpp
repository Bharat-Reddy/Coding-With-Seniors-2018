#include<bits/stdc++.h>    //#include<stdio.h>
using namespace std;       //You don't have this in C
int n,np;
char encrypt(char c)
{
    if(c>=65 && c<=90)
    {
        int p;
        p=c;
        p=p-65;
        p+=np;
        p=p%26;
        p+=65;
        c=p;
        return c;
    }
    else if(c>=97 && c<=122)
    {
        int p;
        p=c;
        p=p-97;
        p+=np;
        p=p%26;
        p+=97;
        c=p;
        return c;
    }
    else if(c>='0' && c<='9')
    {
        int p;
        p=c;
        p=p-48;
        p+=n;
        p=p%10;
        p+=48;
        c=p;
        return c;
    }
    else
    return c;
}

int main()
{
    string s;  //char s[10000];
    cin>>s;    //scanf("%s",s);
    cin>>n;    //scanf("%d",&n);
    np=n%26;
    int i;
    for(i=0;i<s.length();i++)  //for(i=0;i<strlen(s);i++)
    {
        s[i]=encrypt(s[i]);
    }
    cout<<s<<endl;  //printf("%s\n",s);
}
