//https://codeforces.com/problemset/problem/621/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll n; cin>>n;
    ll sum=0;
    vector<ll>v(n);
    for(ll &i:v){
        cin>>i;
        sum+=i;
    }
    
    sort(v.begin(), v.end());
    for(ll i=0;i<n;i++){
        if(sum%2==0){
            cout<<sum<<endl;
            return 0;
        }
        if(v[i]%2!=0){
            sum-=v[i];
            cout<<sum<<endl;
            return 0;
        }
        
    }
    cout<<0;
    return 0;
}