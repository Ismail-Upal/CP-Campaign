#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;

        ll mul = 1, sum = 0;

        if(n % 2){
            n--;
            for(int i = 1; i <= n; i++) cout << 2 << " ", mul *= 2, sum += 2;
            cout << 4 << endl;
            mul *= 4;
            sum += 4;
        }
        else{
            for(int i = 1; i <= n; i++) cout << 6 << " ", mul *= 6, sum += 6;
            cout << endl;
        }

        cout << mul << " " << sum << " " << mul % sum << endl;

    }
    
    return 0;
}