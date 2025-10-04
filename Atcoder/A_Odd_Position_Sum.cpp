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
    vector<int> v(n + 1);
    int sum = 0;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        if(i % 2) sum += x;
    }
    cout << sum ;
    
    return 0;
}