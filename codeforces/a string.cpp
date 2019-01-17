#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()

{
    string s,s1;
    long int i,len;

    cin>>s;
    len=s.length();

    for(i=0;i<len;i++)
    {
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y'||
           s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
        {
            continue;
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;

        }
        s1+=".";
        s1+=s[i];
    }

    cout<<s1;

    return 0;
}
