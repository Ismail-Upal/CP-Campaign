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
        vector<int> v;
        unordered_map<int, int> mp;

        for(int i = 0; i < n; i++){
            int x; cin >> x; 
            if(!mp[x]) v.push_back(x);
            mp[x]++;
        }
        sort(v.begin(), v.end());
        int mex = 0, ok = 0;
        if(v[0] == 0){
            for(int i = 0; i <= n; i++){
                if(mp[i] == 0){
                    mex = i; break;
                }
                if(mp[i] == 1){
                    if(!ok){
                        ok = 1;
                    }
                    else{
                        mex = i; break;
                    }
                }
            }
        }
        else mex = 0;
        cout << mex << endl;
    }
    
    return 0;
}