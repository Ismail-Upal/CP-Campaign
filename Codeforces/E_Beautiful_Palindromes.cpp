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
        int n, k; cin >> n >> k;
        map<int, int> mp;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        
        int x, y, z;
        if(sz(mp) == n){
            x = v[0];
            y = v[1];
            z = v[2];
        }
        else{
            for(int i = 1; i <= n; i++){
                if(!mp[i]){
                    x = i; break;
                }
            }
            z = v[0];
            for(int i : v){
                if(i != z){
                    y = i; break;
                }
            }
        }
        vector<int> ans;
        while(1){
            if(k >= 3){
                ans.push_back(x);
                ans.push_back(y);
                ans.push_back(z);
                k -= 3;
            }
            else if(k >= 2){
                ans.push_back(x);
                ans.push_back(y);
                k -= 2;
            }
            else if(k >= 1){
                ans.push_back(x);
                k--;
            } 
            else break;
        }

        for(auto i : ans) cout << i << " " ;
        cout << endl;
    }
    
    return 0;
}