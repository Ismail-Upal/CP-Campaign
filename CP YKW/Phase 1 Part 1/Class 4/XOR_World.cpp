
#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
ll zToY(ll y, ll x){
    ll ans = 0 ;
    while (y>=x and y%4 != 3){
        ans ^= y;
        y--;
    }
    return ans;
}
ll zToX(ll y, ll x){
    ll ans =0;
    while (y >= x and y%4 != 3){
        ans ^= y;
        y--;
    }
    return ans;
}
int32_t main()
{
    optimize();
    ll x, y; cin>>x>>y;
    cout <<( zToY(y, 0) ^zToX(x-1, 0));
    return 0;
}