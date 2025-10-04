#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define Y cout << "YES" << endl
#define N cout << "NO" << endl
#define tc int t;cin>>t;while(t--)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    tc{
        ll n; cin>>n;
        ll x=ceil(n/2.0);
        //cout<<x<<endl;
        ll y=x+1;
        ll i=1;
        while(i<=x || y<=n){
            if(i<=x)cout<<i<<" ";
            if(y<=n)cout<<y<<" ";
            i++; y++;
        }
        cout<<endl;
    }
    return 0;
}