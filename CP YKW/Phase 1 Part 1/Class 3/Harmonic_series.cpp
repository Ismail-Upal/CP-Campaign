#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    int n; cin>>n;
    double ans =0 ;
    for(int i=1; i<=n ;i++){
        ans+=(double)(1.0/i);
    }
    
    cout<<fixed<<setprecision(4)<<ans;
    return 0;
}