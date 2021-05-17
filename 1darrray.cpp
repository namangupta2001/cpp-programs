#include<bits/stdc++.h>
using namespace std;
int i;
int multi(int ar)
{    int m=1;
     for(int j=1;j<=10;j++)
     {
         m=ar*j;
         cout<<m<<endl;
     }
return m;
}

int main()
{ int  ar[9]={2,3,4,5,6,7,8,9};
  
    for(i=0;i<8;i++)
    {
        if (ar[i]%2==0)
        {
            cout<<ar[i]<<endl;
        
        }
        else{
            multi(ar[i]);
        }
    }
    return 0;
}