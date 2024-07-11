//https://codeforces.com/problemset/problem/633/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll a,b,c; cin>>a>>b>>c;
    for(ll i=0;i<=10000;i++){
        for(ll j=0;j<=10000;j++){
            if(a*i+b*j ==c){
                cout<<"Yes";
                return 0;
            }
            if(a*i+b*j > c)break;
        }
    }
    cout<<"No";
    return 0;
}