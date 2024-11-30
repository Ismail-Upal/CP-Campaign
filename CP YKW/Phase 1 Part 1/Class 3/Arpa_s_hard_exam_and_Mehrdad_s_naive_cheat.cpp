#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int N= 1e14;
int main()
{
    int n; cin>>n;
    int ans=1;    
    if(n==0)ans=1;
    else if(n%4==0)ans=6;
    else if(n%4==1)ans=8;
    else if(n%4==2)ans=4;
    else if(n%4==3)ans=2;
    cout<<ans;
    return 0;
}