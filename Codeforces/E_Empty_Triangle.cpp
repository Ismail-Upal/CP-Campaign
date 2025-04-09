#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
// #define endl '\n'
#define sz(x) (ll)(x).size()
mt19937_64 rnd(chrono::steady_clock::now().time_since_epoch().count());
// rnd() -> generates a random number
int rnd_range(int l, int r){ return rnd() % (r - l + 1) + l;}
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<int> v = {1, 2, 3};
        while(1){
            cout << "? " << v[0] << ' ' << v[1] << " " << v[2] << endl;
            int p; 
            cin >> p;
            if(p == -1){
                break;
            }
            if(p == 0){
                cout << "! " << v[0] << " " << v[1] << ' ' << v[2] << endl;
                break;
            }
            int i = rnd_range(0, 2);
            v[i] = p;
        }
    }
    
    return 0;
}