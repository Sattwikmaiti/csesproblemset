#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
    int n;
    cin>>n;
    set<int> s;
    for(int i=1;i<=n;i++)
       {
        int x;
        cin>>x;
        s.insert(x);
       }
       cout<<s.size();
}