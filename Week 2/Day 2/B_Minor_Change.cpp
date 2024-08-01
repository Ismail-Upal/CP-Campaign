//https://atcoder.jp/contests/abc172/tasks/abc172_b?lang=en
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    string a,b; cin>>a>>b;
    ll ans=0,n=a.size();
    for(int i=0;i<n;i++){
        if(a[i]!=b[i])ans++;
    }
    cout<<ans;
    return 0;
}