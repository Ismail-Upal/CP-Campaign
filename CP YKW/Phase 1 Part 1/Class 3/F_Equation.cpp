
#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll power(int x, int n){
    ll p = 1;
    for(int i=1; i<=n; i++){
        p *= x;
    }
    return p;
}

ll ans(int x, int n){
    ll anss=0;
    for(int i=0; i<=n; i+=2){
        anss += power(x, i);
    }
    return anss-1;
}

int main()
{
    int x, n; cin>>x>>n;

    cout<<ans(x, n);
    return 0;
}