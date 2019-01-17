#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

int main()

{
    int i,n,sum=0;

    cin>>n;
    int student[n];
    for(i=0; i<n; i++)
    {
        cout<<"Enter the student numbers  "<<i+1<<" : ";
        cin>>student[i];

        sum=sum+student[i];

    }
    cout<<"Sum of numbers is : "<<sum<<endl;

    float avg=(float) sum/n;
    cout<<"Average number is : "<<avg<<endl;




    int max=student[0];
    int min=student[0];

    for(i=1;i<n;i++)
        if(max<student[i])
            max=student[i];
    cout<<max;

}
