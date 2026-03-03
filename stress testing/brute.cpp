#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int n, m; cin >> n >> m;
    set<int> a;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.insert(x);
    }
    int both = 0, one = 0, two = 0;
    vector<int> b(m);
    for(int i = 0; i < m; i++){
        cin >> b[i];

        set<int> div;
        for(int j = 1; j * j <= b[i]; j++){
            if(b[i] % j == 0){
                div.insert(j);
                div.insert(b[i] / j);
            }
        }

        int k = 0;
        for(auto j : div){
            if(a.find(j) != a.end()){
                k++;
            }
        }
        if(k == 0) two++;
        else if(k < sz(a)) both++;
        else one++;
    }

    if(both % 2) one++;
    if(one > two) cout << "Alice" << endl;
    else cout << "Bob" << endl;
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; 
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}