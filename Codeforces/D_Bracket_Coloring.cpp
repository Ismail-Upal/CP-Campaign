#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
        
    int n; cin >> n;
    string s; cin >> s;

    vector<int> ans(n);

    int i = 0, j = 0;
    while(j < n){
        while(i < n and s[i] != '(') i++;
        j = max(i + 1, j);
        while(j < n and s[j] != ')') j++;

        if(i < j and j < n and s[i] == '(' and s[j] == ')') ans[i] = 1, ans[j] = 1;
        i++, j++;
    }
    i = 0, j = 0;
    while(j < n){
        while(i < n and s[i] != ')' and ans[i] != 0) i++;
        j = max(i + 1, j);
        while(j < n and s[j] != '(' and ans[j] != 0) j++;

        if(i < j and j < n and s[i] == ')' and s[j] == '(' and ans[i] + ans[j] == 0) ans[i] = 2, ans[j] = 2;
        i++, j++;
    }
    for(auto i : ans) cout << i << " ";
    cout << endl;
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