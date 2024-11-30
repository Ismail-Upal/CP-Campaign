
#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long

int main()
{
    optimize();
    ll x, y; cin>>x>>y;
    int ans =0 ;
    while(y>=x){
        ans++;
        y/=2;
    }
    cout<<ans;
    return 0;
}