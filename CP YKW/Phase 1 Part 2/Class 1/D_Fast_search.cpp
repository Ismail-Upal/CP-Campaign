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
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    int q; cin >> q;
    while(q--){
        int l, r; cin >> l >> r;
        //int left = lower_bound(v.begin(), v.end(), l) - v.begin();
        //int right = upper_bound(v.begin(), v.end(), r) - v.begin();
        int left=0, right=n;
        int lo = 0, hi = n-1, mid;
        while(lo <= hi){
            mid = lo + (hi - lo)/2;
            if(v[mid] >= l){
                left = mid;
                hi = mid - 1;
            }
            else lo = mid + 1;
        }

        lo = 0, hi = n-1, mid;
        while(lo <= hi){
            mid = lo + (hi - lo)/2;
            if(v[mid] > r){
                right = mid;
                hi = mid -1;
            }
            else lo = mid + 1;
        }
        cout << right -left  << " ";

    } 
    return 0;
}