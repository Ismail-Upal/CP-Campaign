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
        ll n; cin >> n;
        deque<char> s(33); 
        for(int k = 31, i = 0; k >= 0; k--, i++){
            if(n & (1 << k)) s[i] = '1';
            else s[i] = '0';
        }
        int i = 0, j = 31;
        while(i <= 31 and s[i] == '0') i++;
        while(j >= 0 and s[j] == '0') j--;

        if(i > j){
            cout << "YES" << endl; continue;
        }
        int m = -1;
        if((j - i) % 2 == 0) m = (i + j) / 2;

        if(m != -1 and s[m] == '1'){
            cout << "NO" << endl; continue;
        }
        while(i <= j and s[i] == s[j]) i++, j--;

        if(i < j) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    
    return 0;
}