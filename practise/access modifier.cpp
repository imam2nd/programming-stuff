#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,arr[5000],x=0;
    for(i=2;i<=5000;i++)
    {
        k=0;
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            k++;
        }
        if(k==1)
        arr[x]=i;
        x++;
        cin>>x;
        cout<<arr[x];
    }
}
