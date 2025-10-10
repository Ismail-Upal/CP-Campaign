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
        int n; cin >> n;
        vector<ll> v(n + 1);
        for(ll i = 1; i <= n; i++) cin >> v[i];
        
        if(n == 2){
            cout << abs(v[1] - v[2]) << endl; 
            continue;
        }

        ll a = 0, b = 0, c = 0, d = 0;

        for(ll i = 1; i <= n; i++){
            if(i % 3 == 0){
                a += v[i];
            }
            if(i % 3 == 2){
                a += abs(v[i] - v[i - 1]);
            }
        }
        if(n % 3 == 1){
            a += v[n];
        }

        for(ll i = 1; i <= n; i++){
            if(i % 3 == 1){
                b += v[i];
            }
            if(i % 3 == 0){
                b += abs(v[i] - v[i - 1]);
            }
        }
        if(n % 3 == 2){
            b += v[n];
        }

        reverse(v.begin() + 1, v.begin() + n);
        for(ll i = 1; i <= n; i++){
            if(i % 3 == 0){
                c += v[i];
            }
            if(i % 3 == 2){
                c += abs(v[i] - v[i - 1]);
            }
        }
        if(n % 3 == 1){
            c += v[n];
        }
        for(ll i = 1; i <= n; i++){
            if(i % 3 == 1){
                d += v[i];
            }
            if(i % 3 == 0){
                d += abs(v[i] - v[i - 1]);
            }
        }
        if(n % 3 == 2){
            d += v[n];
        }
        

        cout << min({a, b, c, d}) << endl;
    }
    
    return 0;
}