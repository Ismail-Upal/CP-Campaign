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
    vector<ll>a(n), b(m), c(n+m);
    for(ll &i:a)cin>>i;
    for(ll &i:b)cin>>i;

    int i=0,j=0, k=0;
    while(i<n || j<m){
        if( j==m || (i<n && a[i]<b[j])){
            c[k]=a[i];
            i++; k++;
        }
        else{
            c[k]=b[j];
            j++; k++;
        }
    }
    for(ll l:c)cout<<l<<" ";
    return 0;
}