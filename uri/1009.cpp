#include<bits/stdc++.h>
using namespace std;
string st;
map<string, int> arr;
int main()
{
    int n,m,x,y,a,b;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>st;
        arr[st]+=1;
    }
    cin>>st;
    printf("%d",arr[st]);
    return 0;
}
