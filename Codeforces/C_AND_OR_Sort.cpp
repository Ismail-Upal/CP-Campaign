#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    string s; cin >> s;

    vector<int> pref(n + 1, 0);
    if(s[0] == '0') pref[0] = 1;
    for(int i = 1; i < n; i++){
        int x = 0;
        if(s[i] == '0') x = 1;
        pref[i] = pref[i - 1] + x;
    }

    int ans = 0;
    if(s[0] == '1'){
        ans = count(s.begin(), s.end(), '0');
    }
    else{
        ans = count(s.begin(), s.end(), '1');

        int i = 0;
        while(i < n and s[i] == '0') i++;
        int j = n - 1;
        while(j >= 0 and s[j] == '1') j--;

        if(i > j) ans = 0; 
        int x = 0;
        while(i <= j){
            if(s[i] == '1'){
                int z = pref[j] - pref[i - 1];
                ans = min(ans, x + z);
                x++;
            }
            i++;
        }
        ans = min(ans, x);
    }
    cout << ans << endl;
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