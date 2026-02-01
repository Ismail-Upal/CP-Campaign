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
        int i = 0, j = n - 1;
        vector<pair<int, int>> ans;

        while(i <= j){
            int x = (i + 1) * 3 - 1;
            int y = (j + 1) * 3;
            ans.push_back({x, y});
            i++; j--;
        }

        cout << sz(ans) << endl;
        for(auto [i, j] : ans){
            cout << i << " " << j << endl;
        }
    }
    
    return 0;
}