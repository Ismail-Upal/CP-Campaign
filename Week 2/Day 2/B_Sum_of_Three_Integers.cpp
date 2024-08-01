//https://atcoder.jp/contests/abc051/tasks/abc051_b?lang=en
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll k,s;cin>>k>>s;
    ll ans=0;
    for(int i=0;i<=k;i++){
        for(int j=0;j<=k;j++){
            int z=s-(i+j);
            //cout<<i<<" " <<j<<" "<<z<<endl;
            if(z<=k && z>=0)ans++;
        }
    }
    cout<<ans;
    return 0;
}