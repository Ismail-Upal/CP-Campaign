#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________
 
int main()
{
    optimize();
 
    tc{
        ll n , b, c; cin >> n >> b >> c;
        if(b==0){
            ll ans;
            if(c>n-1) ans = n;
            else ans = n-1;
        }
        
    }
 
    return 0;
}