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
    int i = 0, j = 0, cnt = 0;
    while(j < n){
        if(s[i] == '('){
            cnt = 1;
            j++;
            while(j < n and cnt != 0){
                if(s[j] == '(') cnt++;
                else cnt--;
                j++;
            }
            if(!cnt) for(int k = i; k < j; k++) ans[k] = 1;
        }
        else{
            cnt = 1;
            j++;
            while(j < n and cnt != 0){
                if(s[j] == ')') cnt++;
                else cnt--;
                j++;
            }
            if(!cnt) for(int k = i; k < j; k++) ans[k] = 2;
        }
        i = j;
    }

    int op = 0;
    for(auto i : ans) op |= i;
    if(ans[n - 1] == 0) cout << -1 << endl;
    else if(op == 1 or op == 2){
        cout << 1 << endl;
        for(int i = 0; i < n; i++) cout << 1 << " ";
        cout << endl;
    }
    else{
        cout << 2 << endl;
        for(int i : ans) cout << i << " ";
        cout << endl;
    }
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