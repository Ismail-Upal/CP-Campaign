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
        map<int, vector<int>> mp;
        for(int i = 1; i <= n; i++){
            int x; cin >> x ;
            mp[x].push_back(i);
        }
        for(auto [i, v] : mp){
            if(sz(v) == 1){
                cout << v.back() << endl;
                break;
            }
        }
    }
    
    return 0;
}