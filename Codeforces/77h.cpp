#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        ll x, y; cin >> x >> y;
        vector<int> ans;

        for(int i = x; i > y; i--){
            ans.push_back(i);
        }
        for(int i = y; i < x; i++){
            ans.push_back(i);
        }
        
        cout << sz(ans) << endl;
        for(auto i : ans) cout << i << " ";
        cout << endl;
    }
    
    return 0;
}