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
    
    int n, x; cin >> n >> x;
    vector<pair<int, int>> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i].first;
        v[i].second = i+1;
    }
    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++){
        int nd = x - v[i].first;
        int lo = i + 1, hi = n - 1;
        while(lo < hi){
            int sum = v[lo].first + v[hi].first;
            if(sum == nd){
                cout << v[i].second << " " << v[lo].second << " " << v[hi].second << endl;
                return 0;
            }
            if(sum < nd) lo++;
            else hi--;
        }
    }
    cout << "IMPOSSIBLE" << endl;
    
    return 0;
}