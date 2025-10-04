#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
bool cmp(int a, int b){
    return abs(a) < abs(b);
}
int main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end(), cmp);
        if(n == 2){
            cout << "Yes" << endl; continue;
        }

        int ok = 1;
        for(int i = 1; i + 1 < n; i++){
            ll r = 1LL * v[i] * v[i];
            ll rr = 1LL * v[i - 1] * v[i + 1];
            if(rr != r) ok = 0;
        }
        for(int i : v) cout << i << " " ;
        if(ok) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
    return 0;
}