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
        int n, k; cin >> n >> k;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());

        ll cnt = 0, sum = 0, i = 0, j = n - 1, ans = 0;
        vector<ll> res;
        while(i <= j){
            ll dif = (sum + v[j]) / k;
            if(dif > cnt){
                ans += v[j];
                sum += v[j]; 
                cnt = dif;
                res.push_back(v[j]);
                j--;
            }
            else{
                sum += v[i];
                res.push_back(v[i]);
                i++;
            }
        }
        cout << ans << endl;
        for(auto i : res) cout << i << " " ;
        cout << endl;
    }
    
    return 0;
}