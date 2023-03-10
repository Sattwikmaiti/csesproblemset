#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    ll r,c;
    cin>>r>>c;
    
    if(r<=c)

    { ll col=0;
          if(c==1)
          col=1;
          else if(c%2==0)
            col=(c-1)*(c-1)+1;
            else col=c*c;


         
        if(c%2!=0)
          cout<<col-r+1<<endl;
          else cout<<col+r-1<<endl;

    }
    else {

        ll row=0;
        if(r%2==0)
        {
            row=r*r;

        }
        else row=(r-1)*(r-1)+1;

 if(r%2==0)
          cout<<row-c+1<<endl;
          else cout<<row+c-1<<endl;
        
    }
    }
}