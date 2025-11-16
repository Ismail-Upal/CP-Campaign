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
    
    tc{
        string s; cin >> s;
        int n = sz(s);
        int l = 0, r = n - 1;
        int L = -1, R = -1, M = -1;
        for(auto i : s){
            if(i == '>') R = 1;
            if(i == '<') L = 1;
        }
        if(L == 1 and R == 1) M = 1;

        while(s[l] == '*' or s[l] == '<') l++;
        while(s[r] == '*' or s[r] == '>') r--;
        r = n - r - 1;
        if(M == 1){
            if(max(l, r) == 0) cout << -1 << endl;
            else{
                int i = l - 2,cnt = 0;
                while(i >= 0 and s[i] == '*') cnt++, i--;
                l += cnt; 
                i = n - r + 1, cnt = 0;
                while(i < n and s[i] == '*') cnt++, i++;
                r += cnt;
                cout << max(l, r) << endl;
            }
        }
        else if(L == 1){
            int i = l - 2, cnt = 0;
            while(i >= 0 and s[i] == '*') cnt++, i--;
            l += cnt;
            
            cout << max(l, n) << endl;
        }
        else if(R == 1){
            int i = n - r + 1, cnt = 0;
            while(i < n and s[i] == '*') cnt++, i++;
            r += cnt;
            cout << max(r, n) << endl;
        }
        else if(n >= 2) cout << -1 << endl;
        else cout << 1 << endl;
    }
    
    return 0;
}