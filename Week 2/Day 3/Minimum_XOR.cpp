//https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/MINMXOR
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll t;cin>>t;
    while(t--){
        ll n,x=0; cin>>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
            x^=v[i];
        }
        ll ans=x;
        for(ll i=0;i<n;i++){
            ans=min(ans,x^v[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
// a^a = 0
// x = a^b^c^d
// x^a = b^c^d  