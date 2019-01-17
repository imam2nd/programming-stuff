#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p1,c1,p2,c2;
    float pr1,pr2,total;

    cin>>p1>>c1>>pr1;
    cin>>p2>>c2>>pr2;
    total=(c1*pr1)+(c2*pr2);
    cout<<fixed;
    cout<<setprecision(2)<<"VALOR A PAGAR: R$ "<<total<<endl;

    return 0;
}
