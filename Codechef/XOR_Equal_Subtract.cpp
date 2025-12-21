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
        for(int i = 0; i < n; i++) cin >> v[i];
        sort(v.rbegin(), v.rend());

        vector<int> one, zro, onezro;
        int odd = 0, evn = 0;
        for(int i = 0; i < n; i++){
            if(v[i] % 2) one.push_back(v[i]), odd++;
            else zro.push_back(v[i]), evn++;
        }
        int ok = 0, mx = 0, idx = 0, odd1 = 0;;
        for(int i = 0; i < n; i++){
            if(!ok and v[i] % 2) ok = 1, mx++, idx = i;
            else if(ok and v[i] % 2) odd1++, mx = max(mx, mx + odd1 + evn);
            else if(ok and v[i] % 2 == 0) evn--;
        }
    }
    
    return 0;
}