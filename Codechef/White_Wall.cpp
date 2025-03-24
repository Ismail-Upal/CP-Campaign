#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        string s; cin >> s;
        vector<string> v = {"RGB", "RBG", "BRG", "BGR", "GRB", "GBR"};
        int mp[6] = {0};
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 6; j++){
                if(v[j][i % 3] != s[i]){
                    mp[j]++;
                }
            }
        }
        sort(mp, mp + 6);
        cout << mp[0] << endl;
    }
    
    return 0;
}