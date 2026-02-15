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
    
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int i = 0, j = n - 1;
    while(s[i] == '.') i++;
    while(s[j] == '.') j--;

    if(i > j){
        cout << s; return 0;
    }

    for(int l = i - 1; l >= 0 and i - l <= k; l--){
        s[l] = '*';
    }

    for(int l = j + 1; l < n and l - j <= k; l++){
        s[l] = '*'; 
    }

    vector<pair<int, int>> v;
 
    for(int l = i; l < j; ){
        int x = -1, y;
        while(l < j and s[l] == '*') l++;
        x = l;
        while(l < j and s[l] == '.') l++;
        y = l - 1;

        if(x != -1) v.push_back({x, y});
        l++;
    }

    for(auto [l, r] : v){
        if(r - l + 1 <= 2 * k){
            while(l <= r) s[l++] = '*';
        }
        else{
            for(int x = l; x < l + k; x++) s[x] = '*';
            for(int x = r; x > r - k; x--) s[x] = '*';
        }
    }
    cout << s;
    
    return 0;
}