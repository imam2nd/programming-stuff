#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,n;
    cin>>a>>b>>c>>d;
    double sum=(a*2+b*3+c*4+d)/10;
    cout<<fixed<<setprecision(1)<<"Media: "<<sum<<endl;
    if(sum>=7.0)
        cout<<"Aluno aprovado."<<endl;


    else if(sum<=5.0)
        cout<<"Aluno reprovado."<<endl;

    else if(sum>=5.0)
    {
        cout<<"Aluno em exame."<<endl;
        cin>>n;
        cout<<"Nota do exame: "<<n<<endl;
        sum=(sum+n)/2.0;

        if(sum>5.0)
            cout<<"Aluno aprovado."<<endl;
        else
            cout<<"Aluno reprovado."<<endl;

        cout<<"Media final: "<<sum<<endl;

    }

    return 0;

}
