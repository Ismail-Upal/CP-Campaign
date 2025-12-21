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
        int n, k; cin >> n >> k;
        int x = (n - (k - 1)), y = (n - 2 * k + 2);
        if(x > 0 and x % 2){
            cout << "YES" << endl;
            cout << x << " ";
            while(k > 1){
                cout << 1 << " "; 
                k--;
            }
            cout << endl;
        }
        else if(y > 0 and y % 2 == 0){
            cout << "YES" << endl;
            cout << y << " ";
            while(k > 1){
                cout << 2 << " "; 
                k--;
            }
            cout << endl;
        }
        else cout << "NO" << endl;
    }
    
    return 0;
}