//https://www.codechef.com/problems/CHEFIZZA
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const ll N=1e6+3;
ll a[N];
int main()
{
    optimize();
    ll t;cin>>t;
    memset(a,-1,sizeof(a));
    a[1]=0;
    a[0]=0;
    a[3]=4;
    for(ll i=2; i<N; i=i*2){
        a[i]=0;
    }
    ll sum=4;
    for(ll i=2;i<N;i++){
        if(a[i]==0){
            sum=4;
            
        }
        else{
            a[i]=sum;
            sum+=4;
        }
    }
    while(t--){
        ll n; cin>>n;
        cout<<a[n/2]<<endl;
    }
    return 0;
}
