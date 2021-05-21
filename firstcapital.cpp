#include<bits/stdc++.h>

using namespace std;

int upper(char c)
{
 return 'A'+(c-'a');
}

int main()
{
    string s;
    getline(cin,s);

    for (int i=0;i<s.size();i++)
    {
        if (s[i]==s[0])
          {
              s[0]=upper(s[0]);
          }
    
        else if (s[i]==' ')
        {
            s[i+1]=upper(s[i+1]);
        }
    }

cout<<s;

return 0;
}