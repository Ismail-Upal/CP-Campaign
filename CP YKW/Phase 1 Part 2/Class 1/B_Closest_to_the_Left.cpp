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
 
    int n, k; cin  >> n >> k;
    vector<int> v(n+1);
    for(int i = 1; i <= n; i++) cin >> v[i];
    auto search = [&](int x){
        int l = 1, r = n, mid, ans = 0;
        while(l <= r){
            mid = l + (r - l)/ 2;
            if(v[mid] <= x){
                ans = mid ;
                l = mid + 1;
            }
            else r = mid - 1;
        }
        return ans ;
    };
    while(k--){
        int x; cin >> x;
        search(x);
        cout << search (x) << endl;
    }
 
    return 0;
}