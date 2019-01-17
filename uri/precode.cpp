#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cstring>
#include<cstdlib>
using namespace std;

int main()
{
    vector<int>vec;
    vec.push_back(4);
    vec.push_back(1);
    vec.push_back(12);

    vector<int>::iterator itr1=vec.begin();
    vector<int>::iterator itr2=vec.end();
    for(vector<int>::iterator itr=itr1;itr!=itr2;++itr)
    {

        sort(itr1,itr2);
        cout<<*itr;

    }


    return 0;
}
