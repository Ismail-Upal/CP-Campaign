#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//---------------------------------------------------------
const int N = 1e5 + 6, p = 137, mod = 1e9 + 7;
int pw[N];
void prec(){
    pw[0] = 1;
    for(int i = 1; i < N; i++){
        pw[i] = 1LL * pw[i - 1] * p % mod;
    }
}
int get_hash(string s){
    int n = s.size();
    int hs = 0;
    for(int i = 0; i < n; i++){
        hs += 1LL * s[i] * pw[i] % mod;
        hs %= mod;
    }
    return hs;
}
int32_t main()
{   
    opt();
    prec();
    string a, b; cin >> a >> b;
    cout << get_hash(a) << " " << get_hash(b) << endl;
    
    return 0;
}