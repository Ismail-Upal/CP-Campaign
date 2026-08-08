#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

void dbg(int x){
    cout << x;
}

void Solve() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    
    vector<int> a(x), b(y);
    for(int i = 0; i < x; i++) cin >> a[i];
    for(int i = 0; i < y; i++) cin >> b[i];
    
    int i = x - 1;
    int j = y - 1;
    ll sum = 0;
    int r = 0, c = 0, k = 0;
    int limit = n + m - 1;
    
    while(i >= 0 || j >= 0){
        if(r + c + k == limit) break;
        
        int val_a = (i >= 0) ? a[i] : -1;
        int val_b = (j >= 0) ? b[j] : -1;
        
        if(val_a == val_b){
            k++;
            sum += val_a;
            i--;
            j--;
        } 
        else if(val_a > val_b){
            if(r < n){
                r++;
                sum += val_a;
            }
            i--;
        } 
        else{
            if(c < m){
                c++;
                sum += val_b;
            }
            j--;
        }
    }
    
    cout << sum << "\n";
}

int main()
{   
    fast;
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}