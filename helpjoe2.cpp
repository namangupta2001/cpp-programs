#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m,q,t,b;
      int a[n];
     int x[q];

    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>q;
	
      for(int j=0;j<q;j++)
    {
        cin>>x[j];
    }

      for(int j=0;j<q;j++)
       {  t=0;
          for(int i=0;i<n;i++)
             {
                 b=((a[i]+x[j])%m);
                  if(b>t)
                  {
                      t=b;
                  }
            
        

             }
                 cout<<t<<endl;

             
            

       }

   return 0;
}

