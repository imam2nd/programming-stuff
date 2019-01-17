#include<bits/stdc++.h>

using namespace std;

int main()

{
    int i,len;
    string s,s1;

    cin>>s;
    len=s.length();

    for( i=0;i<len;i++)
    {
        if(s[i]!='+')
            s1=s[i];
        //cout<<s1;
    }

    sort(s1.begin(),s1.end());

    for( i=0;i<len;i++)
    {
        cout<<s1;
    }


    return 0;

}
