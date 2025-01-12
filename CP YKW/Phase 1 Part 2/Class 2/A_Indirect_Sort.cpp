#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        for(int i = 0; i < n - 2; i++){
            for(int j = i + 1; j < n - 1; j++){
                for(int k = j + 1; k < n; k ++){
                    if(v[i] < v[j] and v[j] < v[k]) continue;
                    if(v[i] > v[k]) v[i] = v[i] + v[j];
                    else swap(v[j], v[k]);
                }
            }
        }
        if(is_sorted(v.begin(), v.end())) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
    return 0;
}