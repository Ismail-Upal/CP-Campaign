#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
// #define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        
        cout << "digit" << endl;
        int x; cin >> x;

        cout << "digit" << endl;
        cin >> x;

        for(int i = 8; i >= 1; i /= 2){
            cout << "add " << -i << endl;
            cin >> x;
        }

        cout << "add " << n - 1 << endl;
        cin >> x;

        cout << "!" << endl;
        cin >> x ;

    }
    
    return 0;
}