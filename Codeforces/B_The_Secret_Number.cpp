#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        ll n; cin >> n;
        ll k = 1; 
        ll y = ll(pow(10LL, k)) + 1;
        
        vector<ll> ans;
        while(k <= 18){
            ll x = n / y;
            if(n % y == 0) ans.push_back(x);
            k++;
            y = ll(pow(10LL, k)) + 1;
        }

        if(sz(ans) == 0){
            cout << 0 << endl; continue;
        }
        cout << sz(ans) << endl;
        sort(ans.begin(), ans.end());
        for(auto i : ans) cout << i << " ";
        cout << endl;
    }
    
    return 0;
}