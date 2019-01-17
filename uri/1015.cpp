#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main()
{
    double x1,x2,y1,y2,x,y,temp,z;
    while(scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2)==4){

        x=x2-x1;
        y=y2-y1;
        z=sqrt((x*x)+(y*y));
        cout<<fixed<<setprecision(4)<<z<<endl;
    }
    return 0;
}
