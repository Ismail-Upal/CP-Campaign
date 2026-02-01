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
        vector<int> v(n + 1);
        int mx = 0, mx1 = 0;
        for(int i = 1; i <= n; i++){
            cin >> v[i];
            if(v[i] == n) mx = i;
            if(v[i] == n - 1) mx1 = i;
        }
        if(n == 1) cout << 1 ;
        else if(mx == 1){
            while(v[mx] != n - 1) mx++;
            for(int i = mx; i <= n; i++) cout << v[i] << " ";
            if(mx == n){
                for(int i = 1; i <= mx - 1; i++) cout << v[i] << " ";
            }
            else{
                cout << v[mx - 1] << " ";
                for(int i = 1; i <= mx - 2; i++) cout << v[i] << " ";
            }
        }
        else if(mx == n){
            cout << v[mx] << " ";
            mx--;
            while(mx >= 1 and v[mx] > v[1]){
                cout << v[mx] << " "; mx--;
            }
            for(int i = 1; i <= mx; i++) cout << v[i] << " ";
        }
        else{
            for(int i = mx; i <= n; i++) cout << v[i] << " ";
            cout << v[mx - 1] << " ";
            mx -= 2;
            while(mx >= 1 and v[mx] >= v[1]){
                cout << v[mx] << " ";
                mx--;
            }
            for(int i = 1; i <= mx; i++) cout << v[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}