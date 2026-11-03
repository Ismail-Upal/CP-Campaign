#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    vector<int> v(n + 1);
    for(int i = 1; i <= n; i++) cin >> v[i];

    if(v[1] != 1 or v[n] != 1){
        cout << -1; return;
    }

    for(int i = 1; i < n; i++){
        if(abs(v[i] - v[i + 1]) > 1){
            cout << -1; return;
        }
    }

    map<int, bool> mp;
    vector<int> seg = {1};
    mp[1] = 1;

    for(int i = 2; i < n; i++){
        if(v[i] == v[i - 1]){
            int ok = 0;
            for(int i = 2; i <= n; i++){
                if(mp[i]) continue;
                if(i == n){
                    if(mp[i - 1]){
                        seg.push_back(i), mp[i] = 1;
                        ok = 1;
                        break;
                    }
                }
                else if(mp[i - 1] and !mp[i + 1]){
                    seg.push_back(i), mp[i] = 1;
                    ok = 1;
                    break;
                }
                else if(!mp[i - 1] and mp[i + 1]){
                    seg.push_back(i), mp[i] = 1;
                    ok = 1;
                    break;
                }
            }
            if(!ok){
                cout << -1; return;
            }
        }

        if(v[i] < v[i - 1]){
            int ok = 0;
            for(int i = 2; i <= n; i++){
                if(mp[i]) continue;
                if(i == n){
                    if(mp[i - 1]){
                        seg.push_back(i), mp[i] = 1;
                        ok = 1;
                        break;
                    }
                }
                else if(mp[i - 1] and mp[i + 1]){
                    seg.push_back(i), mp[i] = 1;
                    ok = 1;
                    break;
                }
            }
            if(!ok){
                cout << -1; return;
            }
        }

        if(v[i] > v[i - 1]){
            int ok = 0;
            for(int i = 2; i <= n; i++){
                if(mp[i]) continue;
                if(i == n){
                    if(!mp[i - 1]){
                        seg.push_back(i), mp[i] = 1;
                        ok = 1;
                        break;
                    }
                }
                else if(!mp[i - 1] and !mp[i + 1]){
                    seg.push_back(i), mp[i] = 1;
                    ok = 1;
                    break;
                }
            }
            if(!ok){
                cout << -1; return;
            }
        } 
    }

    for(int i = 1; i <= n; i++){
        if(v[i] == 0){
            cout << -1; return;
        }
        if(!mp[i]){
            seg.push_back(i);
        }
    }

    for(auto i : seg) cout << i << " "; 
}

int main()
{   
    fast;
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}