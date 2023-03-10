#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int subs(string s)
{
    int len=1;
    int c=1;
    for(int i=1;i<s.length();i++)
    {

        if(s[i]!=s[i-1])
          {
            len=max(len,c);
            c=1;

          }
          else c++;

    }


    return max(len,c);
}


int main()
{

   string s;
   cin>>s;
   cout<<subs(s);

}