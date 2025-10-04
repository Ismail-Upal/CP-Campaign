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
        vector<int> v(5);
        for(int i = 0; i < 5; i++) cin >> v[i];
        int sum = accumulate(v.begin(), v.end(), 0);
        sort(v.begin(), v.end());
        
        int cost = 0;
        for(int i = 0; i < 5; i++){
            if(sum >= 35) break;
            sum -= v[i];
            sum += 10;
            cost ++;
        }
        cout << cost * 100 << endl;
    }
    
    return 0;
}