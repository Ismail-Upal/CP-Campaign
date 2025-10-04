#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
bool prime(int n){
    if(n == 1) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}
int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        int last = (n - 1) * 4;
        int plus = 1;
        while(1){
            if(prime(last + plus) and !prime(plus)){
                break;
            }
            plus++;
        }

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(i == j) cout << plus << " ";
                else cout << 4 << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}