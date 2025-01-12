#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
const int N = 2e5+5;
int tmp[N];
int32_t main()
{   
    opt();
    
    int n, k, q; cin >> n >> k >> q;
    for(int i = 1; i <= n; i++){
        int l, r; cin >> l >> r;
        tmp[l]++;
        tmp[r + 1]--;
    }
    for(int i = 1; i <= N; i++) tmp[i] += tmp[i - 1];
    for(int i = 1; i <= N; i++){
        if(tmp[i] >= k) tmp[i] = 1;
        else tmp[i] = 0;
    }
    for(int i = 1; i <= N; i++) tmp[i] = tmp[i] + tmp[i-1];
    while(q--){
        int l, r; cin >> l >> r;
        cout << tmp[r] - tmp[l - 1] << endl;
    }
    return 0;
}