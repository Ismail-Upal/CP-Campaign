#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll n,m; cin>>n>>m;
    vector<ll>a(n),b(m);
    for(ll &i:a)cin>>i;
    for(ll &i:b)cin>>i;

    int i=0,j=0, ans=0;
    while(j<m){
        while(a[i]<b[j] && i<n){
            ans++;
            i++;
        }
        cout<<ans<<" ";
        j++;
    }
    return 0;
}