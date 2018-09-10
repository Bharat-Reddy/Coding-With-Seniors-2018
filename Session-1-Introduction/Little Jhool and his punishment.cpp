#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int b,g;
        cin>>b>>g;
        if(abs(b-g)>1)
        cout<<"Little Jhool wins!"<<endl;
        else
        cout<<"The teacher wins!"<<endl;
    }
    return 0;
}
