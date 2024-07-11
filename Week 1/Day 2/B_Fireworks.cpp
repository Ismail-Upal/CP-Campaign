//https://codeforces.com/contest/1945/problem/B
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
        ll a,b,c;cin>>a>>b>>c;
        cout<<(c/a)+(c/b) +2<<endl;
    }
    return 0;
}
