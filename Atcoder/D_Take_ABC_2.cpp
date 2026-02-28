#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    string s; cin >> s;
    int ans = 0;
    int n = sz(s);
    int i = 0, j = 0, k = 0;

    while(k < n){
        while(i < n and s[i] != 'A') i++;
        j = max(j, i + 1);
        while(j < n and s[j] != 'B') j++;
        k = max(k, j + 1);
        while(k < n and s[k] != 'C') k++;

        if(i < j and j < k and k < n and s[i] == 'A' and s[j] == 'B' and s[k] == 'C'){
            ans++;
        }
        else break;
        i++, j++, k++;
    }

    cout << ans;
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