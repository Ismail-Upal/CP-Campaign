//https://codeforces.com/problemset/problem/1807/A
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
        ll a,b,c; cin>>a>>b>>c;
        if(a+b==c)cout<<'+'<<endl;
        else cout<<'-'<<endl;
    }
    return 0;
}