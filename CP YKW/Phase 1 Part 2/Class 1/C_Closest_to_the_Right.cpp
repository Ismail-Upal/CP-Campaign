#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{	opt();
 
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    auto search = [&](int x){
        int l = 0, r = n-1, ans = n, mid;
        while(l <= r){
            mid = l + (r - l) / 2;
            if(v[mid] >= x){
                ans = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        } 
        return ans+1;
    };
    while(k--){
        int x; cin >> x;
        cout << search(x) << endl;
    }
 
    return 0;
}