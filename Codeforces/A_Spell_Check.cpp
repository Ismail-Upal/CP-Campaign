//https://codeforces.com/problemset/problem/1722/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll t; cin>>t;
    string s="Timur";
    sort(s.begin(), s.end());
    while(t--){
        ll n; cin>>n;
        string a; cin>>a;
        sort(a.begin(), a.end());
        if(a==s)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}