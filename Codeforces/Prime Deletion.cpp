#define ll long long int
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll x,y;
        for(int i=0;i<9;i++)
        {
            if (s[i]=='1')
            {
                x=i;
            }
            if (s[i]=='3')
            {
                y=i;
            }
        }
        if (x<y)
        {
            cout<<"13"<<endl;
        }
        else
        {
            cout<<"31"<<endl;
        }
    }
}
