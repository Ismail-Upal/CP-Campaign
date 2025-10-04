//https://atcoder.jp/contests/abc209/tasks/abc209_a
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll a,b; cin>>a>>b;
    if(b<a)cout<<0;
    else cout<<b-a+1;
    return 0;
}
