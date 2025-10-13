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
        int n, k; cin >> n >> k;
        string s; cin >> s;
        int op1 = count(s.begin(), s.end(), '0');
        int op2 = count(s.begin(), s.end(), '1');
        int op3 = count(s.begin(), s.end(), '2');

        if(n == k){
            for(int i = 0; i < n; i++) cout << "-";
            cout << endl;
            continue;
        }

        vector<char> ans(n + 1);
        int i = 1; 
        while(i <= op1){
            ans[i] = '-'; i++;
        }
        int j = n;
        while(j > n - op2){
            ans[j] = '-'; j--;
        }

   
        while(op3 and i <= j){
            ans[i] = '?'; ans[j] = '?';
            i++; j--; op3--;
        }
        while(i <= j){
            ans[i] = '+'; ans[j] = '+';
            i++; j--;
        }
        

        for(int i = 1; i <= n; i++) cout << ans[i] ;
        cout << endl;
    }
    
    return 0;
}