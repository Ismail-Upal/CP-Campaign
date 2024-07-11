//https://atcoder.jp/contests/abc214/tasks/abc214_b
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll a,b;cin>>a>>b;
    int n=100;
    ll ans=0;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            for(int k=0;k<=n;k++){
                if((i+j+k)<=a && (i*j*k)<=b){
                    ans++;
                }
            }
        }
    }
    cout<<ans;
    return 0;
}