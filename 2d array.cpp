#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[2][2],b[2][2],c[2][2];
    int i,j,m,n,o,p;
    cout<<"enter a"<<endl;
    for(i=1;i<=2;i++)
    {
        for(j=1;j<=2;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter b"<<endl;
    for(m=1;m<=2;m++)
    {
        for(n=1;n<=2;n++)
        {
            cin>>b[m][n];
        }
    }

    cout<<"entered array a "<<endl;
    for(i=1;i<=2;i++)
    {
        for(j=1;j<=2;j++)
        {
            cout<<a[i][j]<<endl;
        }
    }
    cout<<"entered array b"<<endl;
     for(m=1;m<=2;m++)
    {
        for(n=1;n<=2;n++)
        {
            cout<<b[m][n]<<endl;
        }
    }
 

    return 0;
}