#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, d; cin >> n >> d;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    if(n % 2 == 0){
        for(int i = 0; i < n; i += 2){
            if(v[i + 1] - v[i] > d){
                cout << "NO" << endl;
                return ;
            }
        }

        cout << "YES" << endl;
    }
    else{
        int cnt = 0;
        int l = 0, r = n - 1;
        while(l < n - 1 and v[l + 1] - v[l] <= d) l += 2;

        if(l == n - 1){
            cout << "YES" << endl;
            return;
        }

        l++;
        while(l < n and v[l + 1] - v[l] <= d) l += 2;

        if(l == n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
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

