#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    n = (3 * n);
    vector<int> v(n + 1);
    
    for(int i = 1, j = 1; i <= n; i += 3){
        v[i] = j;
        j++;
    }
    for(int i = n, j = n; i >= 1; i -= 3){
        v[i] = j;
        j -= 2;
    }
    for(int i = n - 1,j = n - 1; i >= 1; i -= 3){
        v[i] = j;
        j -= 2;
    }

    for(int i = 1; i <= n; i++) cout << v[i] << " ";
    cout << endl;
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

