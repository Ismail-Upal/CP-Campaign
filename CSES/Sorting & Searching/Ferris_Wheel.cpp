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
    
    int n, x; cin >> n >> x;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    int i = 0, j = n - 1;
    int ans = 0;
    while(i <= j){
        if(v[i] + v[j] <= x){
            ans++;
            i++; j--;
        }
        else if(v[i] + v[j] > x){
            ans++;
            j--;
        }
    }
    cout << ans << endl;
    
    return 0;
}