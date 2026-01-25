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
        vector<int> v(n);
        int mex = 0;
        map<int, int> mp;

        for(int i = 0; i < n; i++){
            cin >> v[i];
            mp[v[i]]++;
            while(mp[mex]) mex++;
        }
        int ok;
        if(mex == 0) ok = 0;
        else if(mex == 1){
            if(mp[0] > 1) ok = 0;
            else ok = 1;
        }
        else ok = 1;

        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}