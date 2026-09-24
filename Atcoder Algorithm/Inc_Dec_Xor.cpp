#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, q; cin >> n >> q;

    vector<int> v(n + 1, 0);
    set<int> idx;
    int ans = 0;
    
    while(q--){ 
        int tp; cin >> tp;
        if(tp == 1){
            int i; cin >> i;

            ans ^= v[i] ^ (v[i] + 1);
            v[i]++;
            
            idx.insert(i);
        }
        else{
            vector<int> del;
            for(auto i : idx){
                ans ^= v[i] ^ (v[i] - 1);
                v[i]--;
                if(v[i] == 0) del.push_back(i);
            }
            for(auto i : del){
                idx.erase(i);
            }
        }
        cout << ans << endl;
    }

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