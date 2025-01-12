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
    
    int n; cin >> n;
    if(n == 0) cout << 10 ;
    else if(n < 10) cout << n ;
    else{
        vector<int> v;
        for(int i = 9; i > 1; i--){
            while(n % i == 0){
                v.push_back(i);
                n /= i;
            }
        }
        if(n != 1) cout << -1;
        else{
            sort(v.begin(), v.end());
            for(auto i : v) cout << i ;
        }
    }
    
    return 0;
}