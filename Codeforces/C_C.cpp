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
        int n; cin >> n;
        vector<int> v(n);
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        

        int a = 0, b = 0, ok = 0;

        for(int i = 0; i <= 100; i++){
            if(mp[i]){
                if(mp[i] >= 2){
                    if(!ok) b = i + 1;
                    a = i + 1;
                }
                else if(mp[i] == 1){
                    a = i + 1;
                    ok = 1;
                }
            }
            else break;
        }
        cout << a + b << endl;
    }
    
    return 0;
}