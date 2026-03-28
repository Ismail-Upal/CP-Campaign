#include<bits/stdc++.h>
using namespace std;
using ll = long long;
// #define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int n; cin >> n;
    vector<pair<int, int>> len;
    for(int i = 1; i <= n; i++){
        vector<int> v;
        for(int j = 1; j <= n; j++){
            v.push_back(j);
        }

        cout << "? " << i << " " << n << " ";
        for(auto j : v) cout << j << " ";
        cout << endl;
        
        int x; cin >> x;
        len.push_back({x, i});
    }
    sort(len.rbegin(), len.rend());
    vector<int> ans;
    ans.push_back(len[0].second);
    int mx = len[0].first;

    for(int i = 0; i < n; i++){
        vector<int> v;
        mx--;
        for(int j = 0; j < n; j++){
            if(len[j].first == mx){
                v.push_back(len[j].second);
                cout << "? " << ans.back() << " " << 2 << " " << ans.back() << " " << len[j].second << endl;

                int x; cin >> x;
                if(x == 2){
                    ans.push_back(len[j].second);
                    break;
                }
            }
        }
    }

    cout << "! " << sz(ans) << " ";
    for(int i : ans) cout << i << " ";
    cout << endl;
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}