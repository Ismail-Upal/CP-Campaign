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
        string a, b; cin >> a >> b;

        if(a == b){cout << "YES" << endl; continue;}

        reverse(a.begin(), a.end()); reverse(b.begin(), b.end());

        int zro = count(a.begin(), a.end(), '0');
        int one = count(a.begin(), a.end(), '1'), flip = 0;
        for(int i = 0; i < n; i++){
            if(flip % 2) if(a[i] == '0') a[i] = '1'; else a[i] = '0';

            if(a[i] == b[i]){
                if(a[i] == '0') zro--;
                if(a[i] == '1') one--;
            }
            else{
                if(one == zro){
                    swap(one, zro);
                    flip++;
                    if(a[i] == '0') a[i] = '1', one--; else a[i] = '0', zro--;
                }
            }
        }
        // cout << a << endl << b << endl;
        if(one == zro and one == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}