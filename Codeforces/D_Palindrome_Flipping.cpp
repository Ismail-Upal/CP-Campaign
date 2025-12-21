#include<bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

void solve(){
    
}

int main()
{   
    opt();
    auto start = high_resolution_clock::now();
    
    int t = 1; cin >> t;
    while(t--){
        solve();
    }

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cerr << "Time: " << duration.count() << "ms" << endl;
    return 0;
}