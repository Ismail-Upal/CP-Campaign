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
    
    int n; cin >> n;
    vector<int> v;
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            v.push_back(i);
            if(i != n / i) v.push_back(n / i);
        }
    }
    sort(v.begin(), v.end());
    for(auto i : v) cout << i << endl;
    
    return 0;
}