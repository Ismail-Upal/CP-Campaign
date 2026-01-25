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
        vector<int> one, zro;
        map<int, int> mpone, mpzro;
        for(int i = 0; i < n; i++){
            int x, y; cin >> x >> y;
            if(y == 0) zro.push_back(x), mpzro[x]++;
            else one.push_back(x), mpone[x]++;
        }
        sort(one.begin(), one.end());
        sort(zro.begin(), zro.end());

        ll ans = 0, id = 0;
        for(auto i : one){
            if(mpzro[i]){
                ans += id;
                ans += sz(one) - id - 1;
            }
            if(mpzro[i - 1] and mpzro[i + 1]){
                ans++;
            }
            id++;
        }
        id = 0;
        for(auto i : zro){
            if(mpone[i]){
                ans += id;
                ans += sz(zro) - id - 1;
            }
            if(mpone[i - 1] and mpone[i + 1]){
                ans++;
            }
            id++;
        }

        cout << ans << endl;
    }
    
    return 0;
}