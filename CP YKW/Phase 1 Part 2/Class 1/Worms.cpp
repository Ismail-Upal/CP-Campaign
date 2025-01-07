#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{   
    opt();
 
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(i == 0) v[i] = x;
        else v[i] = v[i-1] + x;
    }
    // for(auto i : v) cout << i << " ";
    int m; cin >> m;
    while(m--){
        int q; cin >> q;
        int l = 0, r = n-1, mid , ans;
        while(l <= r){
            mid = l + (r - l) / 2;
            if(v[mid] >= q){
                ans = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        cout << ans+1 << endl;
    }
    return 0;
}