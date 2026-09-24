#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    int n, l, r; cin >> n >> l >> r;
    vector<int> v(n + 1), pref(n + 1), suff(n + 2);
    for(int i = 1; i <= n; i++){
        cin >> v[i];
        pref[i] = v[i] + pref[i - 1];
    }
    for(int i = n; i >= 1; i--){
        suff[i] = v[i] + suff[i + 1];
    }
    for(int i = 1; i <= n; i++) cout << pref[i] << " " ;
    cout << endl;
    for(int i = 1; i <= n; i++) cout << suff[i] << " " ;
    cout << endl;

    int lsum = 0;
    for(int i = 1; i <= n; i++){
        if(l * i < pref[i]){
            if(i + 1 <= n and (i + 1) * l)
            lsum = l * i;
        }
        else break;
    }
    int rsum = 0;

    for(int i = n; i >= 1; i--){
        if((r * (n - i + 1)) < suff[i]){
            
            rsum = r * (n - i + 1);
        }
        else break;
    }
    
    cout << lsum << " " << rsum ;
    
    
    return 0;
}