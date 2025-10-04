//https://codeforces.com/gym/105137/problem/A
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
        ll n,mn=0,mx=0; cin>>n;
        mn=n/6; mx=n/4;
        if(n%4!=0)mx++;
        if(n%6!=0)mn++;
        cout<<mn<<" "<<mx<<endl;
    }
    return 0;
}