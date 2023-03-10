#include<bits/stdc++.h>
using namespace std;
#define ll long long int 


int main()
{
    int n;
    cin>>n;
    ll a[n];
    ll s=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i!=0)
        {
            if(a[i]<a[i-1])
               {
                s+=(a[i-1]-a[i]);
                a[i]=(a[i-1]);
               }
        }



    }
    cout<<s;
}