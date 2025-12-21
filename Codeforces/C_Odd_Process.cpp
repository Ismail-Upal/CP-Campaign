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
        ll odd = 0, evn = 0;
        deque<ll> oddsum, evnsum, v(n);

        for(ll i = 0; i < n; i++) cin >> v[i];
        sort(v.rbegin(), v.rend());

        for(ll i = 0; i < n; i++){
            if(v[i] % 2){
                ll x = 0; odd++;
                if(sz(oddsum)) x = oddsum.back();
                oddsum.push_back(x + v[i]);
            }
            else{
                ll x = 0; evn++;
                if(sz(evnsum)) x = evnsum.back();
                evnsum.push_back(x + v[i]);
            }
        }
        oddsum.push_front(0); 
        evnsum.push_front(0);
        oddsum.resize(odd + 1);
        evnsum.resize(evn + 1);
        // for(ll i = 0; i <= evn; i++) cout << evnsum[i] << " " ;

        for(ll i = 1; i <= n; i++){
            ll sum = 0;
            if(odd == 0) sum = 0;
            else if(evn == 0){
                if(i % 2 == 0) sum = 0;
                else sum = oddsum[1];
            }
            else if(i == n){
                sum = oddsum[odd] + evnsum[evn];
                if(sum % 2 == 0) sum = 0;
                else{
                    sum = oddsum[1] + evnsum[evn];
                }
            }
            else if(1 + evn >= i){
                sum = oddsum[1] + evnsum[i - 1];
            }
            else{
                ll baki = i - 1 - evn;
                sum = oddsum[1] + evnsum[evn];
                if(baki % 2){
                    sum -= evnsum[evn] - evnsum[evn - 1];
                }   
            }

            cout << sum << " ";
        }

        cout << endl;
    }
    
    return 0;
}