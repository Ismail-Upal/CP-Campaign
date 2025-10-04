#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e5 + 13, S = 300;
int n, q, a[N], b[N];

int main()
{   
    opt();
    
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i += S){
        b[i / S] = *min_element(a + i, a + i + S);
    }    

    cin >> q;
    while(q--){
        int l, r; cin >> l >> r;
        r++;
        int ans = INT_MAX;
        while(l < r){
            if(l % S == 0 and l + S <= r){
                ans = min(ans, b[l / S]);
                l += S;
            }
            else ans = min(ans, a[l++]);
        }
        cout << ans << endl;
    }
    
    return 0;
}