#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{   
    opt();
 
    tc{
        ll n; cin >> n;
        auto ok = [&](ll n){
            string s = to_string(n);
            for(auto i : s){
                int d = i - '0';
                if(d > 0 and n % d) return false;
            }
            return true;
        };
        while(!ok(n)){
            n++;
        }
        cout << n << endl;
    }
    
    return 0;
}