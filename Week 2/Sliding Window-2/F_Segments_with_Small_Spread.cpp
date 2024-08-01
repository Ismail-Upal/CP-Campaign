//https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/F
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll n,k; cin>>n>>k;
    vector<ll>v(n);
    for(ll &i:v)cin>>i;
    ll ans=0,i=0,j=0;
    multiset<ll>s;
    while(j<n){
        s.insert(v[j]);
        if(*s.rbegin()-*s.begin() <=k){
            ans+=j-i+1;
            j++;
        }
        if(*s.rbegin()-*s.begin() >k){
            while(*s.rbegin()-*s.begin() > k){
                s.erase(s.find(v[i]));
                i++;
            }
            if(*s.rbegin()-*s.begin()<=k)ans+=j-i+1;
            j++;
        }
    }
    cout<<ans;
    return 0;
}