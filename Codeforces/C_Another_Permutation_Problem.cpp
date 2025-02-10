#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
int fun(vector<int>& v){
    int ans = 0, mx = -1;
        for(int i = 1; i <= 10; i++){
            mx = max(mx, i * v[i - 1]);
            ans += i * v[i - 1];
        }
        
        return ans - mx;

}
int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<int> v = {1, 2, 3, 4, 5, 6, 9, 10, 7, 8};
        cout << fun(v);
    }
    
    return 0;
}