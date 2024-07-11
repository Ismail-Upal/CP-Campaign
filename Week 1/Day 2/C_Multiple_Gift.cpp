//https://atcoder.jp/contests/abc083/tasks/arc088_a
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
    ll i=a,j=2,c=1;
    while(i<=b){
        i*=j;
        if(i<=b)c++;
    }
    cout<<c;
    return 0;
}