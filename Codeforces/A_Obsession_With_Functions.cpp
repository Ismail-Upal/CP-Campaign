#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

template <typename T>using pbds_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

ll a[11] = {9, 1, 4, 9, 7, 7, 9, 4, 1};

void Solve(){
    ll l, r; cin >> l >> r;
    ll ans = 0;
    while(l <= r and l % 9){
        ans += a[l % 9];
        l++;
    }
    while(l <= r and r % 9 != 8){
        ans += a[r % 9];
        r--;
    }
    // cout << l << " " << r << endl;
    ll sum = 0;
    for(int i = 0; i < 9; i++) sum += a[i];

    if(r >= l) ans += sum * ((r - l + 1) / 9);

    cout << ans << endl;
}
// int rec(int n){
//     if(n < 10) return n;
//     int s = 0;
//     while(n > 0){
//         s += (n % 10);
//         n /= 10;
//     }
//     return rec(s);
// }
int main()
{   
    fast;

    // for(int i = 1; i <= 10000; i++){
    //     cout << rec(i * i) << " ";
    //     if(i % 9 == 0) cout << endl;
    // }

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}
