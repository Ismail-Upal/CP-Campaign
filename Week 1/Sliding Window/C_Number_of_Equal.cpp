//https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll n,m; cin>>n>>m;
    vector<ll>a(n),b(m);
    for(ll &i: a)cin>>i;
    for(ll &i: b)cin>>i;

    ll i=0, j=0,ans=0;
    while(i<n && j<m){
        ll cnti=0, cntj=0, curr=a[i];
       
        while(a[i]==curr && i<n){
            cnti++;
            i++;
        }
        while(curr > b[j] && j<m )j++;
        while(b[j]==curr && j<m){
            cntj++;
            j++;
        }
        ans+=(cnti*cntj);
    }
    cout<<ans;
    return 0;
}
