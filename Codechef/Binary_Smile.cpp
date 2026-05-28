#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    string s, t; cin >> s >> t;
    int o1 = 0, o2 = 0;
    o1 = count(s.begin(), s.end(), '1');
    o2 = count(t.begin(), t.end(), '1');
    if(o1 != o2){
        cout << -1 << endl;
        return;
    }

    int i = 0, j = 0, op1 = 0, op2 = 0;
    while(i < n and j < n){
        while(i < n and s[i] != '1') i++;
        while(j < n and t[j] != '1') j++;
        if(s[i] == t[j] and s[i] == '1' and i != j) op1++;
        i++, j++;
    }

    i = n - 1, j = n - 1;
    while(i >= 0 and j >= 0){
        while(i >= 0 and s[i] != '1') i--;
        while(j >= 0 and t[j] != '1') j--;
        if(s[i] == t[j] and s[i] == '1' and i != j) op2++;
        i--, j--;
    }
    cout << min(op1, op2) << endl;
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