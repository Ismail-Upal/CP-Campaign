#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{   
    opt();
 
    tc{
        int n; cin >> n;
        int ok = 0;

        vector<int>v(n + 1), pref(n + 1), suff(n + 1, n);
        for(int i = 1; i <= n; i++){
            cin >> v[i] ;
        }
        // pref[1] = 1;
        // for(int i = 2; i <= n; i++){
        //     if(v[i] < v[pref[i-1]]) pref[i] = i;
        //     else pref[i] = pref[i-1];
        // }
        // suff[n] = n;
        // for(int i = n - 1; i >= 0; i--){
        //     if(v[i] < v[suff[i + 1]]) suff[i] = i;
        //     else suff[i] = suff[i + 1];
        // }

        // for(int i = 2; i < n; i++){
        //     if(v[pref[i]] < v[i] and v[i] > v[suff[i]]){
        //         ok = 1;
        //         cout << "YES" << endl;
        //         cout << pref[i] << " " << i << " " << suff[i] << endl;
        //         break;
        //     }
        // }
        // if(!ok) cout << "NO" << endl;

        for(int i = 2; i < n; i++){
            if(v[i - 1] < v[i] and v[i] > v[i + 1]){
                cout << "YES" << endl;
                ok = 1;
                cout << i - 1 << " " << i << " " << i + 1 << endl;
                break;
            }
        }
        if(!ok) cout << "NO" << endl;
    }
    
    return 0;
}