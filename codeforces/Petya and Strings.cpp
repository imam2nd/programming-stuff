#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,len;

    string s,s1;
    cin>>s>>s1;
    len=s.length();

    for(i=0;i<len;i++)
    {
        s[i]=tolower(s[i]);
        s1[i]=tolower(s1[i]);
    }

    if(s>s1)
    {
        cout<<"1";
    }

    else if(s<s1)
    {
        cout<<"-1";
    }

    else if(s==s1)
    {
        cout<<"0";
    }

    return 0;
}
