#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i,len;
    string s;
    cin>>s;
    len=s.size();
    vector<char>h;

    for(i=0; i<len; i++)
    {
        if(s[i]=='+')
        {
            continue;
        }

        else
        {
            h.push_back(s[i]);
        }


    }

    sort(h.begin(),h.end());

    for(i=0; i<h.size(); i++)
    {
        if(i<h.size()-1)
            cout<<h[i]<<"+";
        else
            cout<<h[i];
    }

    return 0;
}
