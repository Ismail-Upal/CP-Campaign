#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<int> a(n + 1), b(n + 1), pref1(n + 1), pref2(n + 1);
        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = 1; i <= n; i++) cin >> b[i];
        int cur = 1;
        for(int i = 1; i <= n; i++){
            if(a[i] < a[i - 1]) cur = i;
            pref1[i] = cur; 
        }
        cur = 1;
        for(int i = 1; i <= n; i++){
            if(b[i] < b[i - 1]) cur = i;
            pref2[i] = cur; 
        }
        int l = 1, r = 1, lo = 1, hi = 1;
        // for(int i = 1; i <= n; i++) cout << pref2[i] << " ";
        // cout << endl;
        for(int i = 1; i <= n; i++){
            if(pref2[i] == pref2[i - 1]) hi++;
            else{
                lo = i, hi = i;
            }
            if(r - l <= hi - lo and pref1[lo] != pref1[hi]){
                l = lo, r = hi;
            }
        }
        cout << l << " " << r << endl;
    }
    
    return 0;
}