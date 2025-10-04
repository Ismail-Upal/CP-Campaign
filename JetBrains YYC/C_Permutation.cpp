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
    
    int n, k; cin >> n >> k;
    vector<int> v(2 * n);
    for(int i = 0; i < 2 * n; i++) v[i] = i + 1;
    
    for(int i = 0, j = 0; i < k; i ++, j += 2){
        swap(v[j], v[j + 1]);
    }
    for(int i = 0; i < 2 * n; i++){
        cout << v[i] << " ";
    }
    
    return 0;
}