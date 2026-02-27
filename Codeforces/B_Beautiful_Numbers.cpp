#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    string s; cin >> s;
    int ans = 0;
    int sum = 0;
    int n = sz(s);
    for(int i = 0; i < n; i++){
        sum += s[i] - '0';
    }

    sort(s.begin() + 1, s.end());

    for(int i = n - 1; i > 0; i--){
        if(sum <= 9) break;
        
        int x = s[0] - '0';
        x--;
        int y = s[i] - '0';
        
        if(x == 1 or x <= y) sum -= y;
        else{
            s[0] = '1', sum -= x;
            i++;
        }
        ans++;
    }

    cout << ans << endl;
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}