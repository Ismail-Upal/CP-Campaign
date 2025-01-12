#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
const int N = 1e6+3;
int d[N];
int32_t main()
{   
    opt();
    for(int i = 1; i < N; i++){
        for(int j = i; j < N; j+=i){
            d[j]++;
        }
    }
    tc{
        int n; cin >> n;
        cout << d[n] << endl;
    }
    
    return 0;
}