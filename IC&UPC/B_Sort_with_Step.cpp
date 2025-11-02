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
        vector<int> v(n + 1) ;
        for(int i = 1; i <= n; i++) cin >> v[i];

        int ok = -1, dis = 0;
        vector<pair<int, int>> cng;
        for(int i = 1; i <= n; i++){
            if(i % k == v[i] % k) continue;
            dis++, cng.push_back({i, v[i]});
        }

        if(dis > 2){
            ok = -1;
        }
        else if(dis == 2){
            swap(cng[0].second, cng[1].second);
            if(cng[0].first % k == cng[0].second % k and cng[1].first % k == cng[1].second % k) ok = 1;
            else ok = -1;
        }
        else ok = 0;
        cout << ok << endl;
    }
    
    return 0;
}