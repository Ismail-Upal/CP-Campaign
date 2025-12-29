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
        for(int i = 0; i < (1 << n); i++){
            int cnt = 0;
            for(int k = 0; k <= 16; k++){
                if(i & (1 << k)) cnt++;
                else break;
            }
            mp[cnt].push_back(i);
        }
        vector<int> ans;
        map<int, int> done;
        for(auto i : mp) sort(i.second.begin(), i.second.end());

        for(int i = n; i >= 0; i--){
            for(auto j : mp[i]){
                ans.push_back(j);
                done[j]++;
            }
        }
        for(int i = 0; i < (1 << n); i++){
            if(!done[i]) ans.push_back(i);
        }

        for(auto i : ans) cout << i << " " ;
        cout << endl;
    }
    
    return 0;
}