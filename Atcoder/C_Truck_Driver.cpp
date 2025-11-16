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
    
    ll n, a, b; cin >> n >> a >> b;
    string s; cin >> s;
    vector<ll> preA(n + 3, 0), preB(n + 3, 0);
    for(int i = 1; i <= n; i++){
        if(s[i - 1] == 'a') preA[i] = preA[i - 1] + 1, preB[i] = preB[i - 1];
        else preB[i] = preB[i - 1] + 1, preA[i] = preA[i - 1];
    }

    ll ans = 0;
    for(int i = 1; i <= n; i++){
        int l = i, r = n, L = 0;

        while(l <= r){
            int m = l + (r - l) / 2;
            if(preA[m] - preA[i - 1] >= a){
                L = m;
                r = m - 1;
            }
            else l = m + 1;
        }
        if(L == 0) break;

        l = L, r = n; int R = 0;
        while(l <= r){
            int m = l + (r - l) / 2;
            if(preB[m] - preB[i - 1] < b){
                R = m;
                l = m + 1;
            }
            else r = m - 1;
        }

        if(R == 0) continue;;
        ans += R - L + 1;
    }
    cout << ans ;

    return 0;
}