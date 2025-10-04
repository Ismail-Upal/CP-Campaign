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
    
    int n; cin >> n;
    vector<int> v(n);

    int one = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] == 0) one++;
    }

    bitset<1000> bs;
    bs[0] = 1;
    for(int i = 0; i < n; i++){
        bs |= bs << v[i];
    }
    
    int c = 0;
    for(int i = n; i < bs.size(); i++){
        if(i % n == 0 and bs.test(i) == 1) c++;
    }
    for(int i = 0; i < 1000; i++){
        cout << bs[i] << " " ;
    }

    if(c > 0 or one > 0) cout << "YES" ;
    else cout << "NO" ;
    
    
    return 0;
}