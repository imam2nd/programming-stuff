#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,sz;

    cin>>n;

    string s;

    for(i=0; i<n; i++)
    {
        cin>>s;

        sz=s.length();
        if(sz>10)
        {
            cout<<s[0]<<sz-2<<s[sz-1]<<endl;

        }


        else
        {
            cout<<s<<endl;
        }


    }
    return 0;


}
