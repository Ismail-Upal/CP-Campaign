#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
int query(int l, int r){
    cout << "? " << l << " " << r << endl;
    cout.flush();
    int res; cin >> res;
    return res;
}

void Solve(){
    vector<int> v = {0, 4, 8, 15, 16, 23, 42};
    vector<int> ans(6);
    for(int i = 1; i <= 4; i++){
        ans[i] = query(i, i + 1);
    }
    do{
        int ok = 1;
        for(int i = 1; i <= 4; i++){
            if(v[i] * v[i + 1] != ans[i]) ok = 0;
        }

        if(ok){
            cout << "! " ;
            for(int i = 1; i <= 6; i++) cout << v[i] << " ";
            return;
        }
    }
    while(next_permutation(v.begin() + 1, v.end()));
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; //cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}