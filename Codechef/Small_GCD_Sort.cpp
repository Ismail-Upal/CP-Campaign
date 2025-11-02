#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.second > b.second) return 1;
    if(a.second == b.second) return a.first < b.first;
    else return 0;
}

int main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<pair<int, int>> ans;

        for(int i = 1; i <= n; i++){
            ans.push_back({i, __gcd(i, n)});
        }

        sort(ans.begin(), ans.end(), cmp);
        for(auto [i, x] : ans){
            cout << i << " " ;
        }
        cout << endl;
    }
    
    return 0;
}