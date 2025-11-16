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
        int n; cin >> n;
        vector<int> v;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            v.push_back(x);
        }
        int x = n, ans = 0;
        while(x > 0){
            int l, r;
            for(int i = 0; i < sz(v); i++){
                if(v[i] == x){
                    l = i, r = sz(v) - l - 1;
                    v.erase(find(v.begin(), v.end(), x));
                    break;
                }
            }
            ans += min(l, r); x--;
        }

        cout << ans << endl;
    }
    
    return 0;
}