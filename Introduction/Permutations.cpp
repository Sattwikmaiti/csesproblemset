#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    int n;
    cin>>n;
    if(n==1)
    cout<<1<<endl;
    else 
    if(n<=3)
    cout<<"NO SOLUTION";
    else {
        
        int odd=3,even=4;

      if(n%2!=0)
      {odd=n;
      even=n-1;

      }
      else {
        odd=n-1;
        even=n;
      }

      while(odd>0)
        {
            cout<<odd<<" ";
            odd-=2;
        }
        while(even>1)
        {
            cout<<even<<" ";
            even-=2;
        }

    }
}