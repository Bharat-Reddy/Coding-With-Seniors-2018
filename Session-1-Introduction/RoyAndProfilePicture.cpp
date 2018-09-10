#include<bits/stdc++.h>  //#include<stdio.h>
using namespace std;     //You don't have this in C
int main()
{
    int l,n;
    cin>>l;  //scanf("%d",&l);
    cin>>n;  //scanf("%d",&n);
    while(n--)
    {
        int w,h;
        cin>>w>>h;  //scanf("%d%d",&w,&h);
        if(w<l || h<l)
            cout<<"UPLOAD ANOTHER"<<endl;  //printf("UPLOAD ANOTHER\n");
        else if(w==h)
            cout<<"ACCEPTED"<<endl;  //printf("ACCEPTED\n");
        else
            cout<<"CROP IT"<<endl;  //printf("CROP IT\n");
    }
    return 0;
}
