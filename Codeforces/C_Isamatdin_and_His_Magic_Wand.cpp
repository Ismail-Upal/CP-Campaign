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
        int evn = 0, odd = 0;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(v[i] % 2) odd++;
            else evn++;
        }

        if(evn > 0 and odd > 0) sort(v.begin(), v.end());

        for(auto i : v) cout << i << " " ;
        cout << endl;
    }
    
    return 0;
}