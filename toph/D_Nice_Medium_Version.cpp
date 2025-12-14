#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
vector<ll> v;
void rec(int i, int n, string s){
    if(i > n){
        v.push_back(stoll(s));
        return;
    }
    
    rec(i + 1, n, s + "6");
    
    rec(i + 1, n, s + "9");
}

int main()
{   
    opt();
    
    for(int i = 1; i <= 18; i++){
        rec(1, i, "");
    }
    // for(auto i : v) cout << i <<' ';
    sort(v.begin(), v.end());
    tc{
        ll l, r; cin >> l >> r;
        int lo = lower_bound(v.begin(), v.end(), l) - v.begin();
        int hi = upper_bound(v.begin(), v.end(), r) - v.begin();
        cout << hi - lo << endl;
    }
    
    return 0;
}