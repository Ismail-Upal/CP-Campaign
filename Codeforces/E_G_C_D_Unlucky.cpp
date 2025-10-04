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
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        if(a[n - 1] != b[0]){
            cout << "NO" << endl; continue;
        }

        int ok = 1;
        for(int i = 0; i < n; i++){
            if(a[i] % b[0] != 0) ok = 0;
            if(a[i] % a[n - 1] != 0) ok = 0;
            if(b[i] % b[0] != 0) ok = 0;
        }
        if(!ok){
            cout << "NO" << endl; continue;
        }

        for(int i = 0; i < n; i++){
            if(b[i] % a[n - 1] != 0) ok = 0;
        }
        if(!ok){
            cout << "NO" << endl; continue;
        }


        cout << "YES" << endl;
    }
    
    return 0;
}