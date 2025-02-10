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
        vector<int> a(3);
        for(int i = 0; i < 3; i++) cin >> a[i];
        sort(a.rbegin(), a.rend());
        for(int i = 0; i < 3; i++){
            if(a[0] <= a.back()) break;
            a[0] -= a.back();
            a.push_back(a.back());
            sort(a.rbegin(), a.rend());
        }
        if(a[0] == a.back()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}