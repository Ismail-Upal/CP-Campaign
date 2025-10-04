#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc ll t; cin >> t; for (ll _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        ll n; cin >> n; 
        vector<ll> v(n);
        ll odd = 0, even = 0 ;
        for(ll i = 0;i < n; i++){
            cin >> v[i];
            if(v[i] % 2) odd++;
            else even++;
        }
        ll sum = 0;
        if(odd == 0){
            cout << 0 << endl; continue;
        }
        vector<ll> od;
        for(ll i = 0; i < n; i++){
            if(v[i] % 2 == 0) sum += v[i];
            else od.push_back(v[i]);
        }

        sort(od.begin(), od.end());
        sum += od.back();
        od.pop_back();
        ll l = 0, r = sz(od) - 1;
        while(l < r){
            sum += od[r];
            l++; r--;
        }

        cout << sum << endl;
    }
    
    return 0;
}