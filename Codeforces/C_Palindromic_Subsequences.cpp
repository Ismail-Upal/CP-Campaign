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
        cout << 1 << " " << 1 << " ";
        int i = 2; 
        while(i <= n - 2){
            cout << i << " " ;
            i++;
        }
        cout << 1 << endl;
    }
    
    return 0;
}
