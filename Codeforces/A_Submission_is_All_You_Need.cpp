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
        int ans = 0;
        vector<int> v(n);
        int zro = 0, one = 0;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(v[i] == 0) zro++;
            if(v[i] == 1) one++;
        }

        int del = min(zro, one);

        ans += del * 2;
        ans += zro - del;

        for(int i = 0; i < n; i++){
            if(v[i] == 1 and del){
                del--; continue;
            }

            ans += v[i];
        }
        cout << ans << endl;
    }
    
    return 0;
} 