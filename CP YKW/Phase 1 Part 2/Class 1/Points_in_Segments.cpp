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
    int i = 1;
    tc{
        cout << "Case " << i << ":" << endl; i++;
        int n, q; cin >> n >> q;
        vector<int>v (n);
        for(int i = 0; i < n; i++) cin >> v[i];
        while(q--){
            int a, b; cin >> a >> b;
            // int lo = lower_bound(v.begin(), v.end(), a) - v.begin();
            // int hi = upper_bound(v.begin(), v.end(), b) - v.begin();
            int lo = 0, hi = n;
            int l = 0, r = n - 1, mid;
            while(l <= r){
                mid = l + (r - l) /2;
                if(v[mid] >= a){
                    lo = mid;
                    r = mid - 1;
                }
                else l = mid + 1;
            }

            l = 0, r = n - 1;
            while(l <= r){
                mid = l + (r - l) / 2;
                if(v[mid] > b){
                    hi = mid;
                    r = mid - 1;
                }
                else l = mid + 1;
            }
            if(a > v[n-1]) lo = n;
            if(b < v[0]) hi = 0;
            // cout << lo << hi << endl;
            cout << hi - lo << endl;
        }
    }
    
    return 0;
}