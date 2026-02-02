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
        int n, m; cin >> n >> m;
        vector<string> v(n);
        vector<int> zro;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(v[i].back() != '0'){
                cnt += sz(v[i]);
            }
            else{
                int z = 0;
                for(auto it = v[i].rbegin(); it != v[i].rend() and *it == '0'; it++){
                    z++;
                }
                zro.push_back(z);
                cnt += sz(v[i]);
            }
        }
        sort(zro.rbegin(), zro.rend());

        for(int i = 0; i < sz(zro); i++){
            if(i % 2 == 0) cnt -= zro[i];
        }
        if(cnt - 1 >= m) cout << "Sasha" << endl;
        else cout << "Anna" << endl;
    }
    
    return 0;
}