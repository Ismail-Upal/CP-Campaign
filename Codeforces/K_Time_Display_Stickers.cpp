#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int n; cin >> n;
    string s; cin >> s;

    map<int, int> mp;
    for(auto i : s){
        int j = i - '0';
        mp[j]++; 
    }

    int ans = 0;

    for(int i = 0; i <= 1; i++){
        for(int j = 9; j >= 0; j--){
            if(i == 1 and j > 1) continue; 
            for(int k = 5; k >= 0; k--){
                for(int l = 9; l >= 0; l--){
                    if(mp[i]){
                        mp[i]--;
                        if(mp[j]){
                            mp[j]--;
                            if(mp[k]){
                                mp[k]--;
                                if(mp[l]){
                                    mp[l]--;
                                    ans += ; cout << i << " " << j << " " << k << " " << l << endl;
                                }
                                else mp[i]++, mp[j]++, mp[k]++;
                            }
                            else mp[i]++, mp[j]++;
                        }
                        else mp[i]++;
                    }
                }
            }
        }
    }

    cout << ans << endl;
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